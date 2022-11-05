/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:56:20 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/19 13:30:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			reue;
	unsigned char	*wut;

	reue = 0;
	wut = b;
	while (len > reue)
	{
		wut[reue] = (unsigned char)c;
		reue++;
	}
	return (b);
}
