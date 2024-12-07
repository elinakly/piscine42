/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:03:42 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/17 14:29:32 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
}
*/
