/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:13:09 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:13:10 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*store;
	int		i;

	i = ft_strlen(str);
	store = (char *)str;
	while (i >= 0)
	{
		if (store[i] == (unsigned char)c)
			return (&store[i]);
		i--;
	}
	return (NULL);
}
