/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:35:22 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/20 11:52:08 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		lenstr;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, (int)s1[i]))
		s1++;
	lenstr = ft_strlen(s1);
	while (lenstr && ft_strchr(set, (int)s1[lenstr - 1]))
		lenstr--;
	str = ft_substr(s1, 0, lenstr);
	return (str);
}
