/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:19:22 by duzun             #+#    #+#             */
/*   Updated: 2023/02/28 15:21:35 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_stack(t_list **stack)
{
	t_list	*lst;
	t_list	*tmp;

	lst = *stack;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	free(stack);
}
