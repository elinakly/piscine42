/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:04:05 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/23 18:07:40 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "";
// 	char to_find[] = "";
// 	char *result = ft_strstr(str, to_find);
// 	printf("%s\n", result);
// 	char *origin = strstr(str, to_find);
// 	printf("%s\n", origin);
// }