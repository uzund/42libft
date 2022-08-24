/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <ditko73@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:38:42 by duzun             #+#    #+#             */
/*   Updated: 2022/03/19 22:19:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// s ile verilen stringin uzunluğunu bulur.
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

/*
int	main(void)
{
	const char	s[11] = "Davut Uzun";
	printf("s değişkeni %ld karakter uzunluğundadır.\n", ft_strlen(s));
	return (0);
}
*/
