/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:03:37 by ajordan-          #+#    #+#             */
/*   Updated: 2021/08/10 11:21:49 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*new;
	t_list	*aux;
	t_list	*auxnew;

	aux = lst;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	auxnew = new;
	while (aux)
	{
		auxnew->content = f(aux->content);
		auxnew->next = malloc(sizeof(t_list));
		if (!(auxnew->next))
			ft_lstclear(&aux, del);
		aux = aux->next;
		auxnew = auxnew->next;
	}
	return (new);
}
