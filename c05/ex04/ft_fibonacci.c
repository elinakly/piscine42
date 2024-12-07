/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/28 20:12:08 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	for (int i = -1; i<7; i++)
// 	printf ("%d\n", ft_fibonacci(i));
// 	return (0);
// }