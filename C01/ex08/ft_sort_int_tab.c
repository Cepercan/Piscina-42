/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:56:58 by cperez-c          #+#    #+#             */
/*   Updated: 2022/02/21 17:45:33 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size - 2)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
