/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:04:05 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/24 23:07:17 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int origin(char *s1, char *s2)
// {
//     int r = strcmp(s1, s2);
// 	return(r);
// }
// int main(void)
// {
//     char s1[] = "124";
//     char s2[] = "124";
//     int result = ft_strcmp(s1, s2);
//     printf("%d\n", result);
//     int origin = strcmp(s1, s2);
//     printf("%d\n", origin);
//     return(0);
// }
