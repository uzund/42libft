/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <ditko73@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:02:05 by duzun             #+#    #+#             */
/*   Updated: 2022/03/05 00:09:33 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonksiyona verilen c değeri yazdırılabilir karakter ise 1 değilse 0 döndürür.
// #include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
/*
int	main(void)
{
	int	x;

	x = 32;
	printf("yazdırılabilir karakterse 1 değilse 0 yazdır: %d\n", ft_isprint(x));
	return (0);
}
*/
