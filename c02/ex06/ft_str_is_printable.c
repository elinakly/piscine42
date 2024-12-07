/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:37:50 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/20 19:08:12 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str[] = "\0";
	int result;
	
	result = ft_str_is_printable(str);
	printf("%d", result);
	return (0);
}
*/
