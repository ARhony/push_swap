/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 08:53:32 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 07:19:29 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int done(t_piles *p)
{
    t_list  *pa;
    int     curr_v;
    int     prev_v;
    int     i;
    
    if (ft_lstsize(p->b) > 0)
        return (0);
    if (ft_lstsize(p->a) < 2)
        return (1);
    i = 0;
    pa = p->a;
    prev_v = *((int*)(pa->content));
    pa = pa->next;
    while (pa)
    {
        curr_v = *((int*)(pa->content));
        if (curr_v < prev_v)
            i++;
        prev_v = curr_v;
        pa = pa->next;
    }
    if (i == ft_lstsize(p->a) - 1)
        return (1);
    return (0);
}