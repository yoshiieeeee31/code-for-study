/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykusano <ykusano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:26:29 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/30 00:57:51 by ykusano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[i + x] = '\0';
	return (dest);
}
