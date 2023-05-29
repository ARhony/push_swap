/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:53:58 by codespace         #+#    #+#             */
/*   Updated: 2023/05/25 07:11:06 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int error(int nb_error)
{
    if (nb_error > 0)
    {
        if (nb_error == 1)
            ft_printf("Nothing to sort. Error Code (1).");
        else if (nb_error == 2)
            ft_printf("Double int detected. Error Code (2).");
        else if (nb_error == 3)
            ft_printf("Param different than an int detected. Error Code (3).");
        else
            ft_printf("Outside of int range. Error Code (4).");
        return (nb_error);
    }
    return (0);
}