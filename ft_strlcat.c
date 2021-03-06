/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:32:06 by gmckinle          #+#    #+#             */
/*   Updated: 2021/11/29 17:32:07 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = 0;
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	while (dest[i] && i < dstsize)
		i++;
	while ((i + j) < (dstsize - 1) && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dest[i + j] = '\0';
	return (slen + i);
}
