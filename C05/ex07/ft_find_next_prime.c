/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:29:25 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 21:35:46 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 46340;
	if (nb / 2 < 46340)
		i = nb / 2;
	if (nb < 2)
		return (0);
	while (i > 2)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
		nb++;
	return (nb);
}
