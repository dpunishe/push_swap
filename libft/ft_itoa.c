/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:16:21 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:16:22 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrdigt(unsigned int nbr, int n)
{
	unsigned int	count;

	if (n < 0)
		count = 2;
	else
		count = 1;
	while (nbr >= 10 && count++)
		nbr /= 10;
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	count;
	unsigned int	nbr;
	char			*str;

	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	count = ft_nbrdigt(nbr, n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	*(str + count) = '\0';
	while (count--)
	{
		*(str + count) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
