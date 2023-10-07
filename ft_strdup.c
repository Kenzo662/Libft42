#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dest;
    int i;

    i = 0;
    dest = (char *)malloc((sizeof(char) * ft_strlen(s) + 1));
    if (dest == 0)
        return (NULL);
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = s[i];
    return(dest);
}