/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:34:57 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/12 11:02:02 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	my_strlen(const char *s)
{
	unsigned int	i;
	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*schizo;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	schizo = (char *)malloc(ft_strlen(s) + 1);
	if (!schizo)
		return (NULL);
	while (s[i])
	{
		schizo[i] = f(i, s[i]);
		i++;
	}
	schizo[i] = 0;
	return (schizo);
}
