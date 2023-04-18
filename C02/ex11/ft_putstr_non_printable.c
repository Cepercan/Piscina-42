/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:10:13 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/28 17:22:21 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				n;
	char			*hexa;
	unsigned char	c;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c >= 127)
		{
			n = c / 16;
			write(1, "\\", 1);
			write(1, &hexa[n], 1);
			n = c % 16;
			write(1, &hexa[n], 1);
		}
		else
			write(1, &c, 1);
		i++;
	}
}
