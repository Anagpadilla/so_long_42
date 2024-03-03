/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc <anagarc4@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:32:38 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 16:18:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	void	*aux;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		aux = f(lst->content);
		tmp = ft_lstnew(aux);
		if (!tmp)
		{
			ft_lstclear(&new_lst, del);
			del(aux);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>

void *add_one(void *n)
{
    int *new_n = malloc(sizeof(int));
    if (!new_n)
        return NULL;
    *new_n = (*(int *)n) + 1;
    return new_n;
}

void free_int(void *n)
{
    free((int *)n);
}

int main()
{
    // create a list of integers
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *((int *)lst->content) = 1;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *((int *)lst->next->content) = 2;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *((int *)lst->next->next->content) = 3;

    // map the list to a new list of incremented integers
    t_list *new_lst = ft_lstmap(lst, &add_one, &free_int);
    if (!new_lst)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // print the content of the new list
    t_list *current = new_lst;
    while (current)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }
    printf("\n");

    // free the memory used by both lists
    ft_lstclear(&lst, &free_int);
    ft_lstclear(&new_lst, &free_int);

    return 0;
}
*/