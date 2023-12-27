/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:50:25 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/26 22:16:35 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			q;
	unsigned char	*source;
	unsigned char	*destination;

	if (!dst && !src)
		return (NULL);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	q = 0;
	while (q < n)
	{
		*(destination + q) = *(source + q);
		q++;
	}
	return (destination);
}
