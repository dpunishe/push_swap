/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:14:52 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:14:53 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < size && dst != src)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
