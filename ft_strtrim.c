/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:48:37 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/14 11:06:58 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		i;
	int		j;
	int		n;

	if (!s1 || !set)
		return (NULL);
	n = ft_strlen(s1);
	i = 0;
	j = 0;
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	if (i == n || (i == 0 && ft_strlen(set) == 0))
	{
		str_trim = malloc(1);
		*(str_trim + 0) = '\0';
		if (str_trim == NULL)
			return (NULL);
		return (str_trim);
	}
	while (*(s1 + i) && ft_strchr(set, *(s1 + n - 1)))
		n--;
	str_trim = malloc(n - i + 1);
	if (str_trim == NULL)
		return (NULL);
	while (i < n)
	{
		*(str_trim + j) = *(s1 + i);
		i++;
		j++;
	}
	*(str_trim + j) = '\0';
	return (str_trim);
}
