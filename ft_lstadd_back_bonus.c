/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:30:50 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/20 16:06:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstback;

	lstback = *lst;
	if (lstback != NULL)
	{
		while (lstback -> next != NULL)
			lstback = lstback -> next;
		lstback -> next = new;
	}
	else
		*lst = new;
}
