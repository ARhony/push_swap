/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:35:48 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 15:31:51 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
    int     *n_holder;
    int     n_amount;
    t_piles piles;

    piles.a = NULL;
    piles.b = NULL;    
    if (argc != 2)
        return (0);
    n_amount = get_int_amount(argv);
    n_holder = (int*) malloc(sizeof(int) * (n_amount + 1));
    if (!n_amount)
        return (0);
    fill(n_holder, argv);
    cut_args(n_holder, &(piles.a), n_amount);
    
    // TESTS
    ft_printf("-------------");
    ft_printf("Pile A:\n");
    print_piles(piles.a);
    ft_printf("\nPile B:\n");
    print_piles(piles.b);
    
    // INSTRUCTIONS
    ft_printf("SA\n");
    s('a', piles);

    // TESTS
    ft_printf("-------------");
    ft_printf("Pile A:\n");
    print_piles(piles.a);
    ft_printf("\nPile B:\n");
    print_piles(piles.b);
    
    return (0);
}