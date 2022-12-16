/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:48:11 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/13 17:48:11 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		len;

	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	len = ft_strlen(src);
	return (len);
}
