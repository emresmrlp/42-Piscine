/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:29:16 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/05 19:39:42 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b, int firstcomb)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	if (firstcomb != 0)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	finishcomma;

	a = 0;
	finishcomma = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
				finishcomma = 0;
			ft_write_comb(a, b, finishcomma);
			b++;
		}
		a++;
	}
}
