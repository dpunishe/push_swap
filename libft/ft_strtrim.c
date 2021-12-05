/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:13:05 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:13:06 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *ref)
{
	size_t	i;
	size_t	size;

	if (!str || !ref)
		return (NULL);
	i = 0;
	while (str[i] && ft_strchr(ref, str[i]))
		i++;
	size = ft_strlen(&str[i]);
	if (size)
		while (str[i + size - 1]
			&& ft_strrchr(ref, str[i + size - 1]))
			size--;
	return (ft_substr(str, i, size));
}
