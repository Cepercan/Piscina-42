/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:22:53 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 20:09:19 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nbr_base(long int ln, char *base, int len);
int		len_of(char *base);
int		check_len_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			len;

	n = nbr;
	len = check_len_base(base);
	if (len >= 2)
		nbr_base(n, base, len);
}

void	nbr_base(long int ln, char *base, int len)
{
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = ln * (-1);
	}
	if (ln < len)
	{
		ln = base[ln];
		write(1, &ln, 1);
	}
	else
	{
		nbr_base(ln / len, base, len);
		nbr_base(ln % len, base, len);
	}
}

int	check_len_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0' && i >= 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			i = -2;
		j = i + 1;
		while (base[j] != '\0' && i >= 0)
		{
			if (base[i] == base[j])
				i = -2;
			else
				j++;
		}
		i++;
	}
	return (i);
}
