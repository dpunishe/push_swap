/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstloop_start.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:15:34 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:15:35 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstloop_start(t_list **lst)
{
	t_list	*temp;

	if (!(*lst))
		return ;
	temp = ft_lstlast(*lst);
	(*lst)->prev = temp;
	temp->next = *lst;
}
