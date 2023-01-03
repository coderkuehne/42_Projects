/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:20:18 by kekuhne           #+#    #+#             */
/*   Updated: 2023/01/03 15:57:27 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	trim_pony;
	size_t	trim_mullet;

	trim_pony = 0;
	len = 0;
	if (s1 == NULL)
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s1));
	trim_mullet = ft_strlen(s1);
	while (check_set(set, s1[trim_pony]) == 1)
		trim_pony++;
	if (trim_mullet == trim_pony)
		return (ft_strdup(""));
	while (check_set(set, s1[trim_mullet - 1]) == 1)
		trim_mullet--;
	len = trim_mullet - trim_pony;
	return (ft_substr(s1, trim_pony, len));
}
