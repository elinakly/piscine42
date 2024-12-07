/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:37:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/20 16:44:59 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hello";
	char dest[] = "World";

	printf("Before %s\n", dest);
	ft_strcpy(dest, src);
	printf("After %s\n", dest);
}
*/
