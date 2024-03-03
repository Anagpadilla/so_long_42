/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:50:54 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/28 15:03:58 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    t_list *list = ft_lstnew("Mango");
    ft_lstadd_front(&list, ft_lstnew("Papaya"));
    ft_lstadd_front(&list, ft_lstnew("!"));

    int size = ft_lstsize(list);
    printf("list sizes: %d\n", size);

    ft_lstclear(&list, free);

    return 0;
}
*/