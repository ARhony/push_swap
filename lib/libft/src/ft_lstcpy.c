/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:00:28 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 11:13:03 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstcpy(t_list *target)
{
    t_list* new = NULL;
    t_list* tmp_target = target;
    t_list* tmp_new = NULL;
    t_list* new_node = NULL;

    while (tmp_target != NULL)
    {
        new_node = (t_list*) malloc(sizeof(t_list));
        new_node->content = tmp_target->content;
        new_node->next = NULL;
        
        if (new == NULL)
        {
            new = new_node;
            tmp_new = new;
        }
        else
        {
            tmp_new->next = new_node;
            tmp_new = tmp_new->next;
        }
        tmp_target = tmp_target->next;
    }
    return (new);
}