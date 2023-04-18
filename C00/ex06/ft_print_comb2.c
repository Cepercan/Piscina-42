/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:21:05 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/16 18:16:28 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	write_numbers(int n);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99 && b <= 99)
	{
		write_numbers(a);
		write(1, " ", 1);
		write_numbers(b);
		if (a != 98 || b != 99)
		{
			write(1, ", ", 2);
			if (b < 99)
				b++;
			else
			{
				a++;
				b = a;
				b++;
			}
		}
		else
			a++;
	}
}

void	write_numbers(int n)
{
	int	d;
	int	u;

	u = n % 10;
	d = ((n - u) / 10);
	d = d + 48;
	u = u + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}
