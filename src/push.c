/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:36:48 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:36:48 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    push(t_list **f, t_list **t)
{
    t_list *f_tmp = *f;
    t_list *prev = NULL;

    if (f_tmp == NULL) {
        return ;
    }
    while (f_tmp->next != NULL)
    {
        prev = f_tmp;
        f_tmp = f_tmp->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
        ft_lstadd_back(t, f_tmp);
    }
    else
    {
        *f = NULL;
        ft_lstadd_back(t, f_tmp);
    }
}