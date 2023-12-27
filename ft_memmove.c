/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:21:21 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/26 22:17:14 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			q;
	unsigned char	*source;
	unsigned char	*destination;

	if (!dst && !src)
		return (NULL);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (dst > src)
	{
		q = len;
		while (q > 0)
		{
			*(destination + q - 1) = *(source + q - 1);
			q--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (destination);
}
