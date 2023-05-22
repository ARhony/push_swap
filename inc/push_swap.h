#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../lib/tools/tools.h"
#include "../lib/libft/libft.h"

typedef struct  s_piles
{
    t_list      *a;
    t_list      *b;
}               t_piles;

void    fill(int *all, char **argv);
void    cut_args(int *all, t_list **pile_a, int max);
int     get_int_amount(char **argv);
void    print_piles(t_list *p);
void    s(char t, t_piles p);

#endif
