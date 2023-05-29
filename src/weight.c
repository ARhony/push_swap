/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weight.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 07:47:19 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 23:25:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int get_weight_pile(t_list *p)
{
    int     w;
    int     c;
    int     val;
    t_list  *current;
    t_list  *next;

    w = 0;
    current = p;
    while (current)
    {
        c = 0;
        next = current->next;
        val = *((int*)(current->content));
        while (next)
        {
            if (*((int*)(next->content)) < val)
                c++;
            next = next->next;
        }
        w += c;
        current = current->next;
    }
    return (w);
}

int get_weight(t_list *pa, t_list *pb)
{
    return (get_weight_pile(pa) + get_weight_pile(pb));
}