/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:53:30 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/13 16:53:30 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char 	*ptr_dest;
	unsigned char 	*ptr_src;
	unsigned char	*tmp;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	*ptr_src = tmp;
	i = 0;
	while(i < n)
	{
		dest[i] = tmp[i];
		i++;
	}
	return(dest);
}
