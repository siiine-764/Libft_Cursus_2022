/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:46:05 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/05 17:06:38 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *sas1, const void *sas2, size_t n)
{
	unsigned char	*sas_1;
	unsigned char	*sas_2;
	size_t			sz;

	sas_2 = (unsigned char *)sas2;
	sas_1 = (unsigned char *)sas1;
	sz = 0;
	while (sz < n)
	{
		if (sas_1[sz] != sas_2[sz])
			return (sas_1[sz] - sas_2[sz]);
		sz++;
	}
	return (0);
}
