#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size == 0)
	{
		return (j);
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int  ft_iend(const char *s1 , const char *set)
{
    int i;
    int j;
    int k;

    j = 0;
    i = ft_strlen(s1) - 1;
    k = 1;
    while (s1[i] && k > 0)
    {
        j = 0;
        while(set[j])
        {
            if (s1[i] == set[j])
            {
                i--;
                break;
            }
            j++;
            if (set[j] == '\0')
                k = 0;
            }
    }
    return (i);
}
int  ft_istart(const char *s1 , const char *set)
{
    int i;
    int j;
    int k;

    j = 0;
    i = 0;
    k = 1;
    while (s1[i] && k > 0)
    {
        j = 0;
        while(set[j])
        {
            if (s1[i] == set[j])
            {
                i++;
                break;
            }
            j++;
            if (set[j] == '\0')
                k = 0;
            }
    }
    return (i);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *str;

    if (!s1[0] && !set[0])
    {
        str = (char *)malloc(sizeof(char));
        str[0] = '\0';
        return (str);
    }
    else if(!set[0])
    {
        str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
        ft_strlcpy(str, s1, ft_strlen(s1) + 1);
        return (str);
    }
    i = ft_istart(s1, set);
    j = ft_iend(s1, set);
    if (i > j)
    {
        str = (char *)malloc(sizeof(char));
        str[0] = '\0';
        return (str);
    }
    k = 0;
    str = (char *)malloc(sizeof (char) * (j - i + 2));
    if (!str)
        return (NULL);
    while (i <= j)
    {
        str[k] = s1[i];
        i++;
        k++;
    }
    str[k] = '\0';
    return (str);
}