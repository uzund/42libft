/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <duzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:11:38 by duzun             #+#    #+#             */
/*   Updated: 2022/03/21 18:39:01 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// *s göstericisi ile gösterilen dizgi için de c değişkeni tersten arar bulduğu
// konumdan sonrasını döndürür. Bulamazsa NULL '0' döndürür.

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c)
	{
		while (i--)
			if (*(s + i) == (char)c)
				return ((char *)s + i);
		return (NULL);
	}
	return ((char *)s + i);
}
