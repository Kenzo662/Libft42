/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <klopez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:41:38 by klopez            #+#    #+#             */
/*   Updated: 2023/10/03 10:12:52 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const char *str = s;

	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}