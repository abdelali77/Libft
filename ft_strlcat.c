/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:13:30 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/26 12:13:23 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	j;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	while (*(src + i) && j < dstsize - 1)
	{
		*(dst + j) = *(src + i);
		j++;
		i++;
	}
	*(dst + j) = '\0';
	return (dst_len + ft_strlen(src));
}
