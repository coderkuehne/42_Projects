/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:57:45 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/13 13:57:45 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{	
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
