/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:53:38 by kekuhne           #+#    #+#             */
/*   Updated: 2023/01/03 15:57:50 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	if ((dest != src) && (n != 0))
	{
		ptr_dest = (unsigned char *)dest;
		ptr_src = (unsigned char *)src;
		while (i < n)
			ptr_dest[i++] = *ptr_src++;
	}
	return (dest);
}
