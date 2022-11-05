/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:14:12 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/19 13:19:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lstsize(t_list *lst)
{
	int	sz;

	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst -> next;
	}
	return (sz);
}

void	lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst -> content);
		free(lst);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpynext;

	if (lst == NULL || !del)
		return ;
	while (*lst != NULL)
	{
		cpynext = (*lst)-> next;
		lstdelone(*lst, del);
		*lst = cpynext;
	}
}
