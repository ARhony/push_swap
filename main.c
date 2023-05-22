/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:20:22 by aramon            #+#    #+#             */
/*   Updated: 2023/05/21 17:26:08 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print(t_list *pile_a, int size)
{
    int     i;
    int     max;
    t_list 	*n;

    i = 0;
    n = pile_a;
    while (i < size)
    {
        printf("%d ", *((int*)(n->content)));
        n = n->next;
        i++;
    }
}

int main(int argc, char **argv)
{
    ft_printf("Ok");
    return (0);
}
