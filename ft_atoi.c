/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:50:22 by duzun             #+#    #+#             */
/*   Updated: 2022/10/16 14:28:35 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

// Verilen *str stringi tarar space ve özel karakterleri geçer, tek eksi görme
// durumunda sayı negatif olarak takip edip eden sayıyı tespit eder.
// char verilen sayiları int bir değere dönüştürür.

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i = i + 1;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (*(str + i) - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}
/*
int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
		// arguman olarak şunları deneyebilirsiniz:
		// +123, -123, 123, 918273645, -2147483648, 2147483647, abc123, 123abc
		num = ft_atoi(av[1]);
		printf("argumanın integer değeri : %d\n", num);
	}
	return (0);
}
*/