/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:18:12 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 18:53:50 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include "libft.h"
#include <stdio.h>

void print_string(void *str)
{
    printf("%s\n", (char *)str);
}

int main()
{
    // create a new linked list
    t_list *lst = ft_lstnew("apple");
    ft_lstadd_back(&lst, ft_lstnew("banana"));
    ft_lstadd_back(&lst, ft_lstnew("orange"));

    // iterate through the list and print each string
    ft_lstiter(lst, &print_string);

    // free the memory used by the list
    ft_lstclear(&lst, &free);

    return 0;
}
*/
