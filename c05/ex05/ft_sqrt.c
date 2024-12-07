/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:15:05 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (root * root <= nb)
	{
		if (root * root == nb)
		{
			return (root);
		}
		root++;
	}
	return (0);
}

// #include <stdio.h>

// int	main (void)
// {
// 	printf("%d", ft_sqrt(-3));
// }