/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:17:02 by mayache-          #+#    #+#             */
/*   Updated: 2022/10/12 14:30:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open("beschreiben.txt", O_WRONLY);
	int fd5 = open("ft_strchr.c", O_WRONLY);
	int fd4 = open("ft_split.c", O_WRONLY);
	int fd3 = open("ft_memchr.c", O_WRONLY);
	int fd2 = open("ft_memset.c", O_WRONLY);

	printf("%d %d %d %d %d\n", fd, fd5, fd4, fd3, fd2);
	ft_putstr("Last Name : Yassine,\nFirst Name : AYAche.", fd);
}*/
/*
0 = open and write = O_WRONLY
1 = open and read = O_RDONLY
2 =  write and read = O_RDWR*/