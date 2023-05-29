/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:49:16 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 09:30:58 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void print_pile(t_list *p)
{
    int     i;
    int     pile_size;

    pile_size = ft_lstsize(p);
    i = pile_size - 1;
    ft_printf("\n");
    while (i >= 0)
    {
        ft_printf("%d\n", *((int*)(ft_lstat(p, i)->content)));
        i--;
    }
    ft_printf("A\n");
}  

void print_piles(t_piles p)
{
    int     i;
    int     pile_size_a;
    int     pile_size_b;

    pile_size_a = ft_lstsize(p.a);
    pile_size_b = ft_lstsize(p.b);
    i = pile_size_a - pile_size_b < 0 ? pile_size_b - 1 : pile_size_a - 1;
    ft_printf("\n");
    while (i >= 0)
    {
        if (i <= pile_size_a - 1)
            ft_printf("%d", *((int*)(ft_lstat(p.a, i)->content)));
        if (i <= pile_size_b - 1)
            ft_printf(" %d", *((int*)(ft_lstat(p.b, i)->content)));
        ft_printf("\n");
        i--;
    }
    ft_printf("A B\n");
}