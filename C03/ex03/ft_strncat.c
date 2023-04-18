/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:26:36 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 10:16:40 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *dest);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_length(dest);
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_length(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
