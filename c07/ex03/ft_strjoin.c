/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:32:33 by eklymova          #+#    #+#             */
/*   Updated: 2024/09/04 19:42:31 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	result_size(int size, char **strs, char *sep)
{
	int	result_len;
	int	i;

	result_len = 0;
	i = 0;
	while (i < size)
	{
		result_len = result_len + ft_strlen(strs[i]);
		i++;
	}
	result_len = result_len + ft_strlen(sep) * (size - 1) + 1;
	return (result_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		result_len;
	char	*result;
	char	*p_result;
	int		i;

	result_len = result_size(size, strs, sep);
	result = (char *)malloc((result_len) * sizeof(char));
	if (result == 0)
		return (NULL);
	p_result = result;
	i = 0;
	while (i < size)
	{
		p_result = ft_strcat(p_result, strs[i]);
		if (i != size - 1)
			p_result = ft_strcat(p_result, sep);
		i++;
	}
	*p_result = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strs[] = {" tree", " moon", " bird"};
// 	int		size = 3;
// 	char	*sep = " | ";
// 	char	*result = ft_strjoin(size, strs, sep);
// 	printf("%s\n", result);
// 	return 0;
// }