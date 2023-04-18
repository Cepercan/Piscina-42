/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:26:36 by cperez-c          #+#    #+#             */
/*   Updated: 2022/03/03 10:23:36 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *dest);
char			*ft_strncat(char *dest, char *src, unsigned int nb);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_dest = ft_length(dest);
	len_src = ft_length(src);
	i = len_dest;
	j = 0;
	if (size < 1)
		return (len_src + size);
	while (src[j] != '\0' && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	return (len_dest + len_src);
}

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
