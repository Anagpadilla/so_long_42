/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:23:42 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 17:54:28 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
    t_list *lst = ft_lstnew("Mango");
    ft_lstadd_front(&lst, ft_lstnew("!"));
    t_list *new = ft_lstnew("Tutifruti");
    ft_lstadd_front(&lst, new);
    ft_lstadd_front(&lst, ft_lstnew("Pineapple"));
    
    while (lst)
    {
        ft_putstr_fd(lst->content, 1);
        ft_putchar_fd('\n', 1);
        lst = lst->next;
    }
    return 0;
}
*/