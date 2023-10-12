#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    t_list *nextelem;

    temp = *lst;

    while (temp != NULL)
    {
        nextelem = temp->next;
        if (temp->content != NULL)
        {
            del(temp->content);
        }
        free (temp);
        temp = nextelem;
    }
    *lst = NULL;
}