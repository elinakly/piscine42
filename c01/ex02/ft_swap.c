/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:38:27 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/17 14:27:20 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main (void)
{
	int	c;
	int	d;

	c = 12;
	d = 15;
	ft_swap(&c, &d);
	printf("%d\n", c);
	printf("%d\n", d);

}
*/