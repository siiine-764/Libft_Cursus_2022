/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:57:12 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/21 11:55:07 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *bl, int c, size_t n)
{
	const unsigned char	*belle;
	size_t				i;

	i = 0;
	belle = (const unsigned char *)bl;
	while (i < n)
	{
		if (belle[i] == (unsigned char) c)
			return ((void *)&belle[i]);
		i++;
	}
	return (NULL);
}
