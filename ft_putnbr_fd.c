/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: sbragagi <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/03 17:09:27 by sbragagi	       #+#    #+#	      */
/*   Updated: 2024/03/16 13:49:14 by sbragagi         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

static void	putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	else
	{
		putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
		putnbr_fd(n, fd);
}
