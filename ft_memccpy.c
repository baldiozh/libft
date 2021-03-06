/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:27:20 by gmckinle          #+#    #+#             */
/*   Updated: 2021/11/29 17:27:21 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		if (*s == (unsigned char)c)
		{
			*d = *s;
			return (d + 1);
		}
		*d++ = *s++;
		i++;
	}
	return (NULL);
}
