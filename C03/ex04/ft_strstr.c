/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:23:32 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/02 18:31:22 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(&str[i], to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			n = s1[i] - s2[i];
			return (n);
		}
	}
	return (0);
}
