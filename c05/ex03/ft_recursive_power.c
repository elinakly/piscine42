/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:25:22 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:10:54 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_recursive_power(-3, 3));
// 	return (0);
// }
