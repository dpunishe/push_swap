/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:16:48 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:16:49 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (*(str + i++) != NULL)
	{
		free(*(str + i - 1));
		*(str + i - 1) = NULL;
	}
	free(str);
	str = NULL;
}
