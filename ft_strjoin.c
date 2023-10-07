#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *s3;
    size_t totallen;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    totallen = ft_strlen(s1) + ft_strlen(s2) + 1;
    s3 = malloc(sizeof(char) * (totallen));   
    if (!s3)
        return (NULL);
    while (s1[i])
    {
        s3[i] = s1[i];
        i++;  
    }
    while (s2[j])
        s3[i++] = s2[j++];
    s3[i] = '\0';
    return (s3);
}