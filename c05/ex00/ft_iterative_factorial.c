/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:25:22 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:00:51 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(24));
// }
