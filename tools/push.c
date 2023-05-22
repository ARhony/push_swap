#include "tools.h"

void    push(t_list **f, t_list **t)
{
    t_list  *f_tmp;
    t_list  *tmp;
    int     i;
    int     ti;

    ti = ft_lstsize(*f) - 1;
    f_tmp = *f;
    i = 0;
    while (f_tmp)
    {
        if (i + 1 == ti)
        {
            tmp = f_tmp->next;
            f_tmp->next = NULL;
            ft_lstadd_back(t, tmp);
            break ;
        }
        f_tmp = f_tmp->next;
        i++;
    }
}