/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <duzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:28:27 by duzun             #+#    #+#             */
/*   Updated: 2022/03/21 21:45:24 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// *s1 dizgisi içerisinde "n" uzunluğu kadar *s2 arar, bulduğunda *s2 parametre
// dahilinde geri kalanı döndürür.

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	while ((s1[i]) && i < n)
	{
		j = 0;
		while (*(s1 + i + j) && s2[j] && i + j < n
			&& *(s1 + i + j) == *(s2 + j))
			j++;
		if (!*(s2 + j))
			return (((char *)s1 + i));
		i++;
	}
	return (NULL);
}
