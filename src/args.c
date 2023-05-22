/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:36:39 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 09:36:39 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    fill(int *all, char **argv)
{
	int     i;
	int     k;
	int     c;
	char    **tmp;

	i = 1;
	c = 0;
	while (argv[i])
	{
		tmp = ft_split(argv[i], ' ');
        k = 0;
		while (tmp[k])
		{
			all[c++] = ft_atoi(tmp[k]);
			k++;
		}
		i++;
	}
    all[c] = 0;
}

int     get_int_amount(char **argv)
{
	int     i;
	int     k;
	int     amount;
	char    **tmp;

	i = 1;
	amount = 0;
	while (argv[i])
	{
		k = 0;
		tmp = ft_split(argv[i], ' ');
		while (tmp[k])
			k++;
		amount += k;
		free(tmp);
		i++;
	}
	return (amount);
}

void    cut_args(int *all, t_list **pile_a, int max)
{
    int     d;

    d = 0;
    while (d < max)
    {
        ft_lstadd_back(pile_a, ft_lstnew(&all[d]));
        d++;
    }
}