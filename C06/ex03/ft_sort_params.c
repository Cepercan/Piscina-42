/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:18:02 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 13:15:09 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char **str, int argc);
int		ft_strcomp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcomp(argv[i], argv[j]) > 0)
			{
				c = argv[i];
				argv[i] = argv[j];
				argv[j] = c;
			}
			j++;
		}
		i++;
	}
	ft_printstr(argv, argc);
	return (0);
}

void	ft_printstr(char **str, int argc)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			write(1, &str[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}

int	ft_strcomp(char *s1, char *s2)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
