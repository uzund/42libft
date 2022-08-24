/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <duzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 02:39:21 by duzun             #+#    #+#             */
/*   Updated: 2022/03/22 03:01:22 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// c ile belirtilen stringi fd ile belirtilen alana yazar (dosya, ekran vb.)

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
