/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:37:11 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:37:11 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstat(t_list *lst, int index)
{
    t_list  *tmp;
    int     i;

    if (ft_lstsize(lst) <= index)
        return (ft_lstlast(lst));
    i = 0;
    tmp = lst;
    while (tmp)
    {
        if (i == index)
            break ;
        tmp = tmp->next;
        i++;
    }
    return (tmp);
}