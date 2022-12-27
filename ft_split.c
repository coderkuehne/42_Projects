/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:11:55 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/26 13:56:41 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	search_sep(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*substr_split(char const *s, char c, size_t str_count)
{
	size_t			len;
	unsigned int	i;
	unsigned int	start;

	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
				i++;
		start = i;
		len = 0;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		if (str_count != 0)
			str_count--;
		else if (str_count == 0)
		{
			return ((ft_substr(&s[start], 0, len)));
		}
	}
	return ((char *)&s[i]);
}

static void	free_mem(char **ptr, size_t array_index)
{
	size_t	i;

	i = 0;
	while (i < array_index)
		free(ptr[i++]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*buffer;
	size_t	str_count;
	size_t	array_index;

	if (!s)
		return (NULL);
	str_count = (search_sep(s, c));
	ptr = malloc(sizeof(char *) * (str_count + 1));
	if (ptr == NULL)
		return (NULL);
	array_index = 0;
	while (array_index < str_count)
	{
		buffer = substr_split(s, c, array_index);
		if (!buffer)
			free_mem(ptr, array_index);
		ptr[array_index++] = buffer;
	}
	ptr[array_index] = 0;
	return (ptr);
}
