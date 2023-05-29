#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../lib/libft/libft.h"

typedef struct  s_piles
{
    t_list      *a;
    t_list      *b;
}               t_piles;

// args.c
void    fill(int *all, char **argv);
void    cut_args(int *all, t_list **pile_a, int max);
int     get_nb_amount(char **argv);
int     args(t_piles *piles, char **argv);

// print.c
void    print_piles(t_piles p);
void    print_pile(t_list *p);

// instr.c
void    rotate(t_list **p);
void    swap(t_list *p);
void    push(t_list **f, t_list **t);
void    reverse_rotate(t_list **p);
void    s(char t, t_piles *p);
void    p(char t, t_piles *p);
void    r(char t, t_piles *p);
void    rr(char t, t_piles *p);

// check.c
int     done(t_piles *p);

// error.c
int     error(int nb_error);

// apply.c
void    apply_oper(t_piles *piles);

#endif
