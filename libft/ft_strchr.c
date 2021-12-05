/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:13:58 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:13:59 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str1;
	char	c1;
	int		i;

	str1 = (char *)str;
	c1 = (char)c;
	i = 0;
	while (str1[i])
	{
		if (str1[i] == c)
			return (&str1[i]);
		i++;
	}
	if (!c)
		return (&str1[i]);
	return (0);
}
