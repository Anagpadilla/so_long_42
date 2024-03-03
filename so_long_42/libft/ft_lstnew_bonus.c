/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:09:15 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 17:52:53 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	**list;
	t_list	*node;
	t_list	*new;
	node = ft_lstnew("Mango");
	new = ft_lstnew("Avocado");
	*list = node;
	printf("%s\n", (*list)->content);
//	ft_lstadd_front(list, new);
	*list = new;
	printf("%s\n", (*list)->content);
//	printf("%s\n", (*list)->next->content);
	return (0);
}*/
