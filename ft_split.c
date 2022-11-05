/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:27:45 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:25 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cnt_words(const char *str, char delimiter)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != delimiter)
		{
			cnt++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

int	sizew(char const *s, char c, int i)
{
	int	sz;

	sz = 0;
	while (s[i] != c && s[i])
	{
		sz++;
		i++;
	}
	return (sz);
}

char	**ft_split(char const *s, char c)
{
	char	**stck;
	int		wrds;
	int		i;
	size_t	sz;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	wrds = cnt_words(s, c);
	stck = (char **)malloc((wrds + 1) * sizeof(char *));
	if (stck == NULL)
		return (stck);
	while (i < wrds)
	{
		while (s[count] == c)
			count++;
		sz = sizew(s, c, count);
		stck[i] = ft_substr(s, count, sz);
		i++;
		count = count + sz;
	}
	stck[i] = 0;
	return (stck);
}
