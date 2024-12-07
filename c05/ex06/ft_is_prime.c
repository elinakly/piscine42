/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:18:13 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	if (nb <= 1)
	{
		return (0);
	}
	prime = 2;
	while (prime * prime <= nb)
	{
		if (nb % prime == 0)
		{
			return (0);
		}
		prime++;
	}
	return (1);
}

// #include <stdio.h>

// int main (void)
// {	
// 	printf("%d\n", ft_is_prime(5));
// }