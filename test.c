/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:08:46 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/14 16:20:51 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define STDIN		0
#define STDOUT		1
#define STDERR		2

#define TYPE_END	3
#define TYPE_PIPE	4
#define TYPE_BREAK	5

typedef struct s_base
{
	char **argv;
	int size;
	int type;
	int fd[2];
	struct s_base *prev;
	struct s_base *next;
} t_base;


void	ft_lstadd_back(t_base **ptr, t_base *new)
{
	t_base	*tmp;

	if (!(*ptr))
		*ptr = new;
	else
	{
		tmp = *ptr;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}

int	check_end(char *argv)
{
	if (!argv)
		return (TYPE_END);
	if (strcmp(argv, "|") == 0)
		return (TYPE_PIPE);
	if (strcmp(argv, ";") == 0)
		return (TYPE_BREAK);
	return (0);
}

int ft_strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while(str[i])
		i++;
	return (i);
}

char *ft_strdub(char *str)
{
	int size = ft_strlen(str);
	char *new;

	if (size == 0)
		return (NULL);
	new = (char *)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	new[size] = '\0';
	while (--size >= 0)
		new[size] = str[size];
	return (new);
}

int size_arg(char **argv)
{
	int i = 0;

	while (argv[i] && strcmp(argv[i], "|") != 0 && strcmp(argv[i], ";") != 0)
		i++;
	return (i);
}

int	parse(t_base **ptr, char **argv)
{
	//size = size_arg
	int size = size_arg(argv);
	t_base * new;

	//alloc for base
	new = (t_base *)malloc(sizeof(t_base));
	if (!new)
		return (0);
	//alloc for base->argv
	new->argv = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new->argv)
		return (0);
	//init base size. prev* + next* null
	new->size = size;
	new->next = NULL;
	new->prev = NULL;
	//base -->argv [size] NULL
	new->argv[size] = NULL;
	//cpy argv[size] into base->argv[size]
	while (--size >= 0)
		new->argv[size] = ft_strdub(argv[size]);
	//base->ends = check_ends()
	new->type = check_end(argv[new->size]);
	//add to list
	ft_lstadd_back(ptr, new);
	return (new->size);
}

void exec(t_base *ptr, char **env)
{
	//pid
	pid_t pid;
	//status
	int status;
	//pipe bool
	bool pipe_is_open = false;
	//pipe false

	//if this type is Pipe or prev exist && prev is Pipe
		//open pipe & pipe bool true
	if (ptr->type == TYPE_PIPE || (ptr->prev && ptr->prev->type == TYPE_PIPE))
	{
		pipe_is_open = true;
		if (pipe(ptr->fd))
			exit(1);
	}
	//fork pid
	pid = fork();
	if (pid < 0)
		exit(1);
	//child
	if (pid == 0)
	{
		//if this is Type pipe dup2 tmp->fd[STDOUT] STDOUT
			//exit fatal if failed
		if (ptr->type == TYPE_PIPE && dup2(ptr->fd[STDOUT], STDOUT) < 0)
			exit(1);
		//if prev exist and is pipe dub2 tmp->fd[STDIN] STDIN
			//exit fatal if failed
		if (ptr->prev && ptr->prev->type == TYPE_PIPE && dup2(ptr->prev->fd[STDIN], STDIN) < 0)
			exit(1);
		//if (exec(tmp->argv[0]) = 0)
			//exit_execve()
		if ((execve(ptr->argv[0],ptr->argv, env)) < 0)
			exit(1);
		//exit child
		exit(EXIT_SUCCESS);
	}
	//parent
		//wait
	waitpid(pid, &status, 0);
		//if pipe bool true
			//close fd[STDOUT]
		//if !next || next is break
				//close fd[STDIN]
	if (pipe_is_open)
	{
		close(ptr->fd[STDOUT]);
		if (!ptr->next || ptr->type == TYPE_BREAK)
			close(ptr->fd[STDIN]);
	}
	//if prev exist and is pipe
		//close fd[STDIN]
	if (ptr->prev && ptr->prev->type == TYPE_PIPE)
		close(ptr->prev->fd[STDIN]);
}

void exec_cmds(t_base *ptr, char **env)
{
	//tmp base*
	t_base *tmp;

	tmp = ptr;
	//loop throught tmp
	while (tmp)
	{
		//if base->argv[0] = cd
		if (strcmp(tmp->argv[0], "cd") == 0)
		{
			/* printf("ok2\n"); */
			//check for size = 1
				//exit
			//else if chdir = 0
				//exit
			if (tmp->size < 2)
				exit(1);
			else if (chdir(tmp->argv[1]))
				exit(1);
			/* printf("ok3\n"); */
		}
		else
			exec(tmp, env);
		//else
			//exec
	//next tmp*
		tmp = tmp->next;
	}
}

void 	free_all(t_base *ptr)
{
	t_base *tmp;
	int i;

	while (ptr)
	{
		tmp = ptr->next;
		i = 0;
		while (i < ptr->size)
			free(ptr->argv[i++]);
		free(ptr->argv);
		free(ptr);
		ptr = tmp;
	}
	ptr = NULL;
}

int main (int argc, char **argv, char **env)
{
	t_base *ptr = NULL;
	int i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			if (strcmp(argv[1], ";") == 0)
			{
				i++;
				continue;
			}
			/* printf("ok1\n"); */
			i += parse(&ptr, &argv[i]);
			/* printf("ok2\n"); */
			if (!argv[i])
				break;
			else
				i++;
		}
		if (ptr)
			exec_cmds(ptr, env);
		/* printf("ok3\n"); */
		free_all(ptr);
		/* printf("ok4\n"); */
	}
	return (0);
}