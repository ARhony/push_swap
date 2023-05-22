/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:51:20 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 15:32:54 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    s(char t, t_piles p)
{
    if (t == 'a')
    {
        swap(&(p.a));
        ft_printf("sa");
    }
    else if (t == 'b')
    {
        swap(&(p.b));
        ft_printf("sb");
    }
    else if (t == 's')
    {
        swap(&(p.a));
        swap(&(p.b));
        ft_printf("ss");
    }
    else
        return ;
}