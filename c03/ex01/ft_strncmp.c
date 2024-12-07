/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:04:05 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/25 14:35:14 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int origin(char *s1, char *s2, unsigned int n)
// {
//     int r = strncmp(s1, s2, n);
// 	return (r);
// }
// int main(void)
// {
//     char s1[] = "43";
//     char s2[] = "\200";
//     unsigned int n = 3;
//     int result = ft_strncmp(s1, s2, n);
//     printf("%d\n", result);
//     int origin1 = origin(s1, s2, n);
//     printf("%d\n", origin1);
//     return(0);
// }