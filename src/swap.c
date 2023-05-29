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

#include "../inc/push_swap.h"

void    swap(t_list *p)
{
    int     pile_size;
    void    *c;

    pile_size = ft_lstsize(p);
    if (pile_size < 2)
        return ;
    c = ft_lstat(p, pile_size - 2)->content;
    ft_lstat(p, pile_size - 2)->content = ft_lstat(p, pile_size - 1)->content;
    ft_lstat(p, pile_size - 1)->content = c;
}