/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:40:46 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 18:55:02 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main()
{
	// To create some nodes:
	t_list *node1 = ft_lstnew("Helloo");
	t_list *node2 = ft_lstnew("Mango");
	t_list *node3 = ft_lstnew("!");

	//To create a list and to add the nodes:
	t_list *list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	// Last node of the list:
	t_list *last = ft_lstlast(list);

	// To print the content of the last node:
	if (last)
		printf("Last Node: %s\n", (char *)last->content);
	else
		printf("The list is empty\n");

	return (0);
}
*/