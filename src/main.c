/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:35:48 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 14:23:09 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void print(t_list *pile_a, int size)
{
    int     i;
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
    
    if (argc != 2)
        return (0);
    ft_printf("%s\n", argv[1]);
    return (0);
}