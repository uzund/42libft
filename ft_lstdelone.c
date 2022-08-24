/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <duzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 04:10:39 by duzun             #+#    #+#             */
/*   Updated: 2022/01/20 04:17:45 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Bir elemani parametre olarak alir ve parametre olarak verilen 'del' 
* islevini kullanarak elamanin iceriginin bellegini bosaltir ve elemani 
* serbest birakir. 'Sonraki' hafizasi serbest birakilmamalidir.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
