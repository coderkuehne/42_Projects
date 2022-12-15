/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:20:17 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/14 19:20:17 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char *ptr;

	i = 0;
	len =  ft_strlen(s);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return(NULL);
	while( i <= len)
	{
		ptr[i] = s[i];
		i++;
	}
	return(ptr);
}
