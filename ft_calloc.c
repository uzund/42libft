/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:27:05 by duzun             #+#    #+#             */
/*   Updated: 2022/10/17 14:28:08 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

// count ile belirtilen dizgiler icin size ile belirtilen boyut kadar hafızada
// yer tahsis edilir. Bu hafıza alanı \0 ile doldurulur.
// geriye bu alanın icerigi dondurulur.

//void	ft_bzero(void *s, size_t n)
//{
//	size_t	i;

//	if (n == 0)
//		return ;
//	i = 0;
//	while (i < n)
//		*((unsigned char *)s + i++) = '\0';
//}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

//int	main(void)
//{
//	char	*c = ft_calloc(2, 1);
//	char	x[4] = {'a', 'b', 'c', '\0'};

//	printf("2 bay yer açıldı içi '\\0' ile doldurulur (değer yok): %s\n", c);
//	c = x;
//	printf("c işaret etiği adres x işaretçisi ile değiştirildi. %s\n", c);
//	return (0);
//}
