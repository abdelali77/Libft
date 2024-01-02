/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:20:28 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/29 17:51:40 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;

	n = ft_strlen(needle);
	if (n == 0)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && j + i < len)
		{
			j++;
			if (j == n)
				return (((char *)haystack + i));
		}
		i++;
	}
	return (NULL);
}
