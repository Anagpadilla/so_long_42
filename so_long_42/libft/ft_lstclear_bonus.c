/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:31:01 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:20:16 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void my_del(void *data)
{
    free(data);
}

int main()
{
    t_list *node1 = ft_lstnew("Mango");
    t_list *node2 = ft_lstnew("!");

    t_list *list = node1;
    ft_lstadd_back(&list, node2);

    printf("Before ft_lstclear:\n");
    while (list)
    {
        printf("%s ", (char *)list->content);
        list = list->next;
    }
    printf("\n");

    ft_lstclear(&list, my_del);

    printf("After ft_lstclear:\n");
    while (list)
    {
        printf("%s ", (char *)list->content);
        list = list->next;
    }
    printf("\n");

    return 0;
}
*/