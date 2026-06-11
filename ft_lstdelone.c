/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:06:56 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/11 12:54:50 by emmmilla         ###   ########.fr       */
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

/* //Testing the function with some values
#include <stdio.h>

void	ft_del_content(void *content)
{
	printf("deleting \"%s\"\n", (char *)content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	if (!node)
		printf("Memory allocation failed.\n");
	else
	{
		ft_lstdelone(node, &ft_del_content);
	}
	return (0);
} */
