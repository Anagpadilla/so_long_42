/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:37:19 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 16:21:43 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void custom_free(void *content)
{
	printf("free content: %s\n", (char *)content);
	free(content);
}

int main(void)
{
	t_list *node = NULL;
	node = ft_lstnew("Mango, Papaya!");
	if (!node)
		return (1);
	if (node != NULL)
		ft_lstdelone(node, &custom_free);
	if (node == NULL)
		printf("Memory has been freed successfully\n");
	else
		printf("Memory has not been freed\n");

	return (0);
}
*/
