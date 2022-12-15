/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:04:42 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/14 14:04:42 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	if (*little == '\0')
		return (big);
	while (big[i] != '\0' && k < len)
	{
		j = 0;
		while (little[j] != '\0')
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return (big + i);
		i++;
		k++;
	}
	return (0);
}
