#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst->content != NULL)
        del(lst->content);
    free (lst);
}