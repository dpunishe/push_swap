/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstloop_stop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:15:27 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:15:28 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstloop_stop(t_list **lst)
{
	if (!(*lst))
		return ;
	if (!((*lst)->prev))
		return ;
	((*lst)->prev)->next = NULL;
	(*lst)->prev = NULL;
}
