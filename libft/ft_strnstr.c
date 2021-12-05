/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:13:15 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:13:16 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[i])
		return ((char *)src);
	while (i < size && src[i])
	{
		j = 0;
		while (i + j < size && src[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}
