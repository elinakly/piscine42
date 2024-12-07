/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:04:05 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/26 19:32:07 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		putchar ('-');
		nb = -nb;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
		putchar (nb + '0');
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	putchar('\n');
// 	ft_putnbr(-42);
// 	putchar('\n');
// 	ft_putnbr(2147483647);
// 	putchar('\n');
// 	ft_putnbr(-2147483648);
// 	putchar('\n');
// 	ft_putnbr(0);
// 	putchar('\n');
// }
