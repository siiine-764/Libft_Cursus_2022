/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:25:08 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/17 13:38:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_str;
	unsigned char	*dst_str;

	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (dst_str > src_str)
		while (len--)
			dst_str[len] = src_str[len];
	else
		ft_memcpy(dst_str, src_str, len);
	return (dst_str);
}
