/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surlee <surlee@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:56:48 by surlee            #+#    #+#             */
/*   Updated: 2023/04/10 13:30:45 by surlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*fed_lst;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	fed_lst = ft_lstnew(f(lst->content));
	if (!fed_lst)
		return (NULL);
	temp = fed_lst;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&fed_lst, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (fed_lst);
}
