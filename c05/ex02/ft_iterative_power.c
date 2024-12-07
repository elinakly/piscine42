/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:25:22 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:05:31 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(3, 0));
// }
