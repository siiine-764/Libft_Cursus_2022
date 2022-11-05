/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:23 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/17 21:51:25 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*digit;
	long	nbr;
	int		bl;
	int		strlen;

	nbr = (long)n;
	bl = 0;
	strlen = ft_digitlen(nbr);
	digit = (char *)malloc(strlen + 1);
	if (digit == NULL)
		return (NULL);
	digit[strlen] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		bl = 1;
	}
	while (strlen--)
	{
		digit[strlen] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (bl == 1)
		digit[0] = '-';
	return (digit);
}
