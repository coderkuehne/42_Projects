/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:54:35 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/18 16:59:21 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < size)
	{
		if ((unsigned char )str1[i] > (unsigned char )str2[i])
			return (1);
		if ((unsigned char )str1[i] < (unsigned char )str2[i])
			return (-1);
		i++;
	}
	return (0);
}
