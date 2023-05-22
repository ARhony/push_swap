#include "tools.h"

void    reverse_rotate(t_list **p)
{
    int     i;
    int     max;
    void    *tmp;

    i = 0;
    max = ft_lstsize(*p);
    tmp = (*p)->content;
    while (1)
    {
        if (i + 1 < max)
            ft_lstat(*p, i)->content =
                    ft_lstat(*p, i + 1)->content;
        else
        {
            ft_lstat(*p, i)->content = tmp;
            break;
        }
        i++;
    }
}