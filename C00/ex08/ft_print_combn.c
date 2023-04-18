/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:52:38 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/21 11:29:34 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		write_number(int nb, int t);
int		ft_putnbr(int ln);
int		new_num(int num, int b);
int		put_zero(int nb);

void	ft_print_combn(int nb)
{
	int	num;
	int	num_max;
	int	b;

	num = write_number(nb, 0);
	num_max = write_number(nb, -1);
	b = 10;
	while (num < num_max)
	{	
		if (num % b != num_max % b)
		{
			if (num < put_zero(nb))
				write(1, "0", 1);
			ft_putnbr(num);
			write(1, ", ", 2);
			num = num + (b / 10);
			b = b / 10;
			num = new_num(num, b);
		}
		else
			b = b * 10;
	}
	ft_putnbr(num_max);
	write(1, "\n", 1);
}

int	write_number(int nb, int t)
{
	int	a;
	int	num;
	int	b;

	num = 0;
	b = 1;
	if (t == 0)
		a = nb - 1;
	else
		a = 9;
	nb--;
	while (nb >= 0)
	{
		num = num + (a * b);
		a--;
		b = b * 10;
		nb--;
	}
	return (num);
}

int	ft_putnbr(int ln)
{
	if (ln < 10)
	{
		ln = ln + '0';
		write(1, &ln, 1);
	}
	else
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
}

int	new_num(int num, int b)
{
	int	num_aux1;
	int	num_aux2;

	while (b > 1)
	{
		num_aux1 = num / b;
		num_aux1 = num_aux1 % 10;
		num_aux1++;
		num_aux2 = num % b;
		num_aux2 = num_aux2 / (b / 10);
		num_aux1 = num_aux2 - num_aux1;
		b = b / 10;
		num = num - (num_aux1 * b);
	}
	return (num);
}

int	put_zero(int nb)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < nb)
	{
		b = b * 10;
		a++;
	}
	return (b);
}
