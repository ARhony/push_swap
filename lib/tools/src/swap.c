/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:36:57 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:36:57 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

void    swap(t_list **p)
{
    void    *c;
    t_list  *tmp;
    int     i;
    int     ti;

    tmp = *p;
    i = 0;
    ti = ft_lstsize(*p) - 1;
    while (tmp)
    {
        if (i + 1 == ti)
        {
            c = tmp->content;
            tmp->content = tmp->next->content;
            tmp->next->content = c;
            break ;
        }
        tmp = tmp->next;
        i++;
    }
}