/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:44:38 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/01 13:46:07 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(int c);
int	not_letter_num(int b);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;
	int	b;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{	
		c = str[i];
		b = str[i - 1];
		if (is_letter(c) == 0 && not_letter_num(b) == 0)
				str[i] -= 32;
		i++;
	}
	return (str);
}

int	is_letter(int c)
{
	if (c < 'a' || c > 'z')
		return (1);
	return (0);
}

int	not_letter_num(int b)
{
	if (b < '0' || (b > '9' && b < 'A') || (b > 'Z' && b < 'a') || b > 'z')
		return (0);
	return (1);
}
