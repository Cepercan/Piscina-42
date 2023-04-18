/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:20:49 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 18:11:29 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sig_atoi(char *str, char *base);
int	len_check_base(char *base);
int	is_base(char *c, char *base);
int	pos_base(char *c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	i;
	int	len;
	int	s;
	int	t;

	len = len_check_base(base);
	s = ft_sig_atoi(str, base);
	i = 0;
	t = 0;
	n = 0;
	if (len >= 2 && s != 0)
	{
		while (str[i] != '\0' && t == 0)
		{
			if (is_base(&str[i], base) == 0)
				n = (n * len) + pos_base(&str[i], base);
			else if (is_base(&str[i], base) != 0
				&& is_base(&str[i - 1], base) == 0)
				t = 1;
			i++;
		}
	}
	return (n * s);
}

int	ft_sig_atoi(char *str, char *base)
{
	int	i;
	int	s;
	int	t;

	i = 0;
	s = 1;
	t = 0;
	while (str[i] != '\0' && s != 0 && t < 3)
	{
		if (((str[i] >= 9 && str[i] <= 12) || str[i] == 32) && t <= 1)
			t = 1;
		else if (str[i] == '+' && s != 0)
			t = 2;
		else if (str[i] == '-' && s != 0)
		{
			t = 2;
			s *= -1;
		}
		else if (is_base(&str[i], base) == 0)
			t = 3;
		else
			s = 0;
		i++;
	}
	return (s);
}

int	len_check_base(char *base)
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

int	is_base(char *c, char *base)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	while (base[i] != '\0' && t == 1)
	{
		if (base[i] == c[0])
			t = 0;
		i++;
	}
	return (t);
}

int	pos_base(char *c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c[0])
		i++;
	return (i);
}
