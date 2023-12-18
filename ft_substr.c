/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:59:53 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/17 21:06:40 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	int				size_to_allocate;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) > len)
		size_to_allocate = len;
	else
		size_to_allocate = ft_strlen(s + start);
	sub_str = malloc((size_to_allocate + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) && i < len && start < ft_strlen(s))
	{
		*(sub_str + i) = *(s + start);
		i++;
		start++;
	}
	*(sub_str + i) = '\0';
	return (sub_str);
}
