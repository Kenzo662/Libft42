#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *tab;

    if (size == 0 || nmemb == 0)
    {
        return (malloc(0));
    }
    tab = malloc(nmemb * size);
    if (tab == 0)
    {
        return (NULL);
    }
    if (tab)
        ft_memset(tab, 0, nmemb * size);
    return (tab);
}
