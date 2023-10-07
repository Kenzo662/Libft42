#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    unsigned int  i;
    unsigned int  j;
    char *subs;

    j = 0;
    i = 0;
    if (start > ft_strlen(s))
    {
        subs = (char *)malloc(sizeof(char));
        if (!subs)
            return (NULL);
        subs[0] = '\0';
        return (subs);
    }
    while (s[start + i] && len--)
        i++;
    subs = (char *)malloc((i + 1) * sizeof(char));
    if (!subs)
        return (NULL);
    while(s[start] && j < i)
    {
        subs[j++] = s[start++];
    }
    subs[j] = '\0';
    return(subs);
}