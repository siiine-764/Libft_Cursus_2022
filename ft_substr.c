/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:01:05 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/21 13:21:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*moschi;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	moschi = (char *)malloc(len + 1);
	if (moschi == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			moschi[i] = s[start + i];
			i++;
		}
	}
	moschi[i] = '\0';
	return (moschi);
}
