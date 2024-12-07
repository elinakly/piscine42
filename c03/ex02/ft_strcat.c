/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:04:05 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/22 19:34:43 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' )
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Hello";
//     char dest[] = "world56465";
//     ft_strcat(dest, src);
//     printf("%s\n", dest);
// }