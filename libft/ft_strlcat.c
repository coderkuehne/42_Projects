/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:02:03 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/13 18:02:03 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int 		oglen_dest;
	unsigned int 		len_src;
	unsigned int		dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	oglen_dest = dest_len;
	if (size == 0 || size < dest_len)
		return (src_len + size);
	while (src[i] != '\0' && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (oglen_dest + len_src);
}
