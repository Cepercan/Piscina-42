/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:38:17 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 18:07:51 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;
	int	t;

	i = 0;
	s = 1;
	n = 0;
	t = 0;
	while (str[i] != '\0' && i >= 0)
	{
		if (((str[i] >= 9 && str[i] <= 12) || str[i] == 32) && n == 0 && t <= 1)
			t = 1;
		else if ((str[i] == '+' || str[i] == '-') && n == 0)
		{
			t = 2;
			s = s * (44 - str[i]);
		}
		else if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10) + (str[i] - '0');
		else
			i = -4;
		i++;
	}
	return (n * s);
}