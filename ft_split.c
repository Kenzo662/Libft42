#include "libft.h"


void ft_strncpy(char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
int ft_countword(const char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
		j++;
	}
	if (s[i - 1] == c)
		j--;
	return (j);
}

char **ft_split(const char *s1, char c)
{
    char **tab;
	int	i;
	int	j;
	int cword;

	tab = (char **)malloc(sizeof (char *) * (ft_countword(s1, c) + 1));
	if (!tab)
		return(NULL);
	i = 0;
	cword = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] && s1[i + j] != c)
			j++;
		if (j > 0)
		{
			tab[cword] = (char *)malloc(sizeof (char) * (j  + 1));
			if (!tab[cword])
				return (NULL);
			ft_strncpy(tab[cword], &s1[i], j);
			cword++;
			i += j - 1;
		}
		i++;
	}
	tab [cword] = 0;
	return (tab);
}