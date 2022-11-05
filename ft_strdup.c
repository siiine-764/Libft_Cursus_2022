/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:11 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/18 14:37:08 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*space;
	int		i;

	i = 0;
	space = (char *)malloc(ft_strlen(s1) + 1);
	if (space == NULL)
		return (NULL);
	while (s1[i])
	{
		space[i] = s1[i];
		i++;
	}
	space[i] = '\0';
	return (space);
}
