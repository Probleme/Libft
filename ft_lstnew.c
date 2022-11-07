/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:34:39 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 23:38:17 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*nlist;

	nlist = (t_list *)malloc(sizeof(t_list));
	if (!nlist)
		return (NULL);
	nlist->content = content;
	nlist->next = NULL;
	return (nlist);
}
