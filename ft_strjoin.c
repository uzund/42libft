/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:10:03 by duzun             #+#    #+#             */
/*   Updated: 2022/11/24 23:15:42 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Hafizada bir parca ayrilir ve cikti olarak s1 ve s2 stringlerinin
// birlestirilmis hali dondurulur.

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*dst;
// 	size_t	i;
// 	size_t	j;

// 	if (!s1 && !s2)
// 		return (NULL);
// 	dst = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + ft_strlen(s2) + 1);
// 	if (!dst)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (*(s1 + i))
// 	{
// 		dst[j++] = s1[i++];
// 	}
// 	i = 0;
// 	while (*(s2 + i))
// 		dst[j++] = s2[i++];
// 	dst[j] = '\0';
// 	return (dst);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*rtn;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		rtn = (char *)malloc(sizeof(char) * (size + 1));
		if (!rtn)
			return (NULL);
		i = 0;
		j = -1;
		while (s1[++j])
			rtn[i++] = s1[j];
		j = -1;
		while (s2[++j])
			rtn[i++] = s2[j];
		rtn[i] = '\0';
		return (rtn);
	}
	return (NULL);
}
