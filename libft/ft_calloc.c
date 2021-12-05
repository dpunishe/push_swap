/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:17:07 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:17:08 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t str, size_t size)
{
	size_t	s;
	size_t	len;

	s = 0;
	len = str * size;
	s = (size_t)malloc(len);
	if (!s)
		return (NULL);
	ft_bzero((void *)s, len);
	return ((void *)s);
}
