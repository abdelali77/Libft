/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:48:37 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/13 18:09:57 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		i;
	int		j;
	int		n;
	int		h;

	if (!s1)
		return (NULL);
	n = ft_strlen(s1);
	i = 0;
	j = 0;
	while (ft_strchr(set, *(s1 + i)) != NULL)
		i++;
	while (ft_strchr(set, *(s1 + n)) != NULL)
		n--;
	str_trim = malloc(n - i + 1);
	if (str_trim == NULL)
		return (NULL);
	h = i;
	while (n - h >= 0)
	{
		*(str_trim + j) = *(s1 + i);
		i++;
		j++;
		n--;
	}
	*(str_trim + j) = '\0';
	return (str_trim);
}
