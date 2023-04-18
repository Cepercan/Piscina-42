/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:26:36 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/02 18:24:58 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *dest);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_length(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_length(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
