/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/09/04 19:42:48 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	lenth;

	lenth = 0;
	while (src[lenth] != '\0')
	{
		lenth++;
	}
	return (lenth);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((ft_strlen(src)) + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello";

// 	printf("%s", ft_strdup(src));
// 	// printf("%s", strdup(src));
// 	return (0);
// }