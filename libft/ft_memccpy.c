/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:15:07 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:15:08 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < size)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
			return (&dst1[i + 1]);
		i++;
	}
	return (NULL);
}
