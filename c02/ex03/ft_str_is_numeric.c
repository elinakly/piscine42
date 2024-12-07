/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:37:50 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/21 13:26:03 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "";
	int result;
	
	result = ft_str_is_numeric(str);
	printf("%d", result);
	return (0);
}
*/
