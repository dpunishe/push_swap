/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:14:39 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:14:40 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numdigt(int unsigned base, int n)
{
	unsigned int	cont;
	unsigned int	num;

	if (n < 0)
	{
		num = -n;
		cont = 2;
	}
	else
	{
		num = n;
		cont = 1;
	}
	while (num >= base && cont++)
		num /= base;
	return (cont);
}
