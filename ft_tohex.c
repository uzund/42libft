/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:39:45 by duzun             #+#    #+#             */
/*   Updated: 2023/04/12 20:39:47 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tohex(int n)
{
	char	*hex;
	int		temp;
	int		i;

	i = 0;
	hex = ft_calloc(sizeof(char), 100);
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		hex[i++] = temp;
		n /= 16;
	}
	hex[i] = '\0';
	return (hex);
}
