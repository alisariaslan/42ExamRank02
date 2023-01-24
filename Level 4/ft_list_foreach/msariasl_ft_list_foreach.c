/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_ft_list_foreach.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:38:16 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/24 12:42:33 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}