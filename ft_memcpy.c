/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <klopez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:42:07 by klopez            #+#    #+#             */
/*   Updated: 2023/10/02 15:12:00 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *dst = dest;
	const char *source = src;

	i = 0;
	if (source == 0 && dest == 0)
	{
		return (0);
	}
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}