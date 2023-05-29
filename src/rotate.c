/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:36:54 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:36:54 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    rotate(t_list **p)
{
    int     i;
    void    *tmp;

    if (*p == NULL)
        return ;
    else
        if ((*p)->next == NULL)
            return ;
    i = ft_lstsize(*p) - 1;
    tmp = ft_lstlast(*p)->content;
    while (1)
    {
        if (i - 1 > 0)
            ft_lstat(*p, i)->content = ft_lstat(*p, i - 1)->content;
        else
        {
            ft_lstat(*p, i)->content = ft_lstat(*p, 0)->content;
            ft_lstat(*p, 0)->content = tmp;
            break;
        }
        i--;
    }
}