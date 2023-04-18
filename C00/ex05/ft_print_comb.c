/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:31:46 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/16 18:24:24 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	write_number(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a != c && b != c && a != b)
				{
					write_number(a, b, c);
				}
				c++;
			}
			b++;
			c = b;
		}
		a++;
		b = a;
	}
}

void	write_number(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}
