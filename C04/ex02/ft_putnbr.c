/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:03:23 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 20:09:09 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_long(long int nl);

void	ft_putnbr(int nb)
{
	long int	nl;

	nl = nb;
	ft_putnbr_long(nl);
}

void	ft_putnbr_long(long int nl)
{
	if (nl < 0)
	{
		write(1, "-", 1);
		nl = nl * (-1);
	}
	if (nl < 10)
	{
		nl = nl + '0';
		write(1, &nl, 1);
	}
	else
	{
		ft_putnbr_long(nl / 10);
		ft_putnbr_long(nl % 10);
	}
}
