/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:33:44 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/14 11:33:44 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t	ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char	*ft_strcat(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
int	ft_strncmp(char *str1, char *str2, unsigned int size);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
char	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif 
