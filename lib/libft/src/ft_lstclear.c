/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:33:17 by aramon            #+#    #+#             */
/*   Updated: 2023/05/25 11:18:21 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list *list)
{
    t_list* current = list;
    t_list* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}