/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/09/04 17:08:04 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int size;
// 	int	*range;
// 	int	i;

// 	size = ft_ultimate_range(&range, 1, 6);
// 	for (i = 0; i < size; i++)
// 	printf("%d", range[i]);
// }
