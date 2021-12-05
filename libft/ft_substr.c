/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:13:00 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:13:01 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;

	if (!(s))
		return (NULL);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s);
	temp = malloc((len + 1) * sizeof(char));
	if (!(temp))
		return (NULL);
	if (len == 0 || start >= (unsigned int)ft_strlen(s))
	{
		*temp = '\0';
		return (temp);
	}
	ft_strlcpy(temp, (const char *)(s + start), len + 1);
	return (temp);
}
