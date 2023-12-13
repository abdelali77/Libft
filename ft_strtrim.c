/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:48:37 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/13 12:48:45 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		i;
	int		j;
	int		n;

	if (!s1)
		return (NULL);
	i = 0;
	str_trim = malloc(strlen(s1) + 1);
	if (str_trim == NULL)
		return (NULL);
	j = strlen(set);
	while (*(s1 + i) == *(set + i))
		i++;
	if (i == j)
	{
		i = 0;
		n = 0;
		while (*(s1 + j + n))
		{
			while (*(s1 + j + n) && *(s1 + j + n) == *(set + n))
				n++;
			*(str_trim + i) = *(s1 + j + n);
			j++;
			i++;
		}
	}
	else
	{
		n = 0;
		i = 0;
		while (*(s1 + i))
		{
			while (*(s1 + i + n) && *(s1 + i + n) == *(set + n))
				n++;
			*(str_trim + i) = *(s1 + i + n);
			i++;
		}
	}
	*(str_trim + i) = '\0';
	return (str_trim);
}
