/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:14:36 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/17 13:39:18 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*srcorigen;
	unsigned char	*dstcpy;
	size_t			i;

	i = 0;
	dstcpy = (unsigned char *)dst;
	srcorigen = (unsigned char *)src;
	if (dstcpy == (void *)0 && srcorigen == (void *)0)
		return (NULL);
	while (i < n)
	{
		dstcpy[i] = srcorigen[i];
		i++;
	}
	return (dstcpy);
}
