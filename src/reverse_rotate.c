/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:36:51 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:36:51 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    reverse_rotate(t_list **p)
{
    int     i;
    int     max;
    void    *tmp;

    i = 0;
    if (*p == NULL)
        return ;
    else
        if ((*p)->next == NULL)
            return ;
    max = ft_lstsize(*p);
    tmp = (*p)->content;
    while (1)
    {
        if (i + 1 < max)
            ft_lstat(*p, i)->content =
                    ft_lstat(*p, i + 1)->content;
        else
        {
            ft_lstat(*p, i)->content = tmp;
            break;
        }
        i++;
    }
}