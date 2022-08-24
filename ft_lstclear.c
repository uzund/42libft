/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <duzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 04:20:36 by duzun             #+#    #+#             */
/*   Updated: 2022/01/20 04:29:46 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* bagli listenin elemanini siler ve hafizadaki yerini temizler, ve o elemanin
* ardini da siler ve serbest birakir. son olarak listenin isaretcisini NULL 
*olarak ayarlar.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_lst;

	current = *lst;
	while (current != NULL)
	{
		next_lst = current->next;
		ft_lstdelone(current, del);
		current = next_lst;
	}
	*lst = NULL;
}
