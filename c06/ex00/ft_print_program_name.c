/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eklymova <eklymova@f0r6s10.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:19 by eklymova          #+#    #+#             */
/*   Updated: 2024/08/29 22:18:04 by eklymova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
