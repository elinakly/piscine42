/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/09/04 17:02:40 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 6;
// 	int	max = 10;
// 	int	*range;
// 	int	i;
// 	range = ft_range(min, max);
// 	for (i = 0; i < max - min; i++)
// 	printf("%d", range[i]);
// }