/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:49:20 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 12:56:45 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    s(char t, t_piles *p)
{
    if (t == 'a')
    {
        swap(p->a);
        ft_printf("sa");
    }
    else if (t == 'b')
    {
        swap(p->b);
        ft_printf("sb");
    }
    else if (t == 's')
    {
        swap(p->a);
        swap(p->b);
        ft_printf("ss");
    }
    else
        return ;
    ft_printf("\n");
}

void    p(char t, t_piles *p)
{
    if (t == 'a')
    {
        push(&(p->b), &(p->a));
        ft_printf("pa");
    }
    else if (t == 'b')
    {
        push(&(p->a), &(p->b));
        ft_printf("pb");
    }
    else
        return ;
    ft_printf("\n");
}

void    r(char t, t_piles *p)
{
    if (t == 'a')
    {
        rotate(&(p->a));
        ft_printf("ra");
    }
    else if (t == 'b')
    {
        rotate(&(p->b));
        ft_printf("rb");
    }
    else if (t == 'r')
    {
        rotate(&(p->a));
        rotate(&(p->b));
        ft_printf("rr");
    }
    else
        return ;
    ft_printf("\n");
}

void    rr(char t, t_piles *p)
{
    if (t == 'a')
    {
        reverse_rotate(&(p->a));
        ft_printf("rra");
    }
    else if (t == 'b')
    {
        reverse_rotate(&(p->b));
        ft_printf("rrb");
    }
    else if (t == 's')
    {
        reverse_rotate(&(p->a));
        reverse_rotate(&(p->b));
        ft_printf("rrr");
    }
    else
        return ;
    ft_printf("\n");
}