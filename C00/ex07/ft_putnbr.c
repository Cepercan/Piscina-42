/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:41:41 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/16 18:24:09 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_long_prunbr(long int nl);

void	ft_putnbr(int nb)
{
	long int	ln;

	ln = nb;
	ft_long_prunbr(ln);
}

void	ft_long_prunbr(long int ln)
{
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = ln * (-1);
	}
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
