/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:26:47 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/17 14:38:48 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
/*
int main(void)
{
	
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, rem = %d", a, b);
}
*/
