/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:05:00 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/24 21:30:41 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;
	void	*c;

	n_list = NULL;
	while (lst != NULL)
	{
		c = f(lst->content);
		if (!c)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		n_node = ft_lstnew(c);
		if (!n_node)
		{
			del(c);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}
