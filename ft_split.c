/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:27:54 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/18 12:04:00 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		while (*(s + i) == c && *(s + i))
			i++;
		while (*(s + i) != c && *(s + i))
		{
			if (*(s + i + 1) == c || *(s + i + 1) == '\0')
				count++;
			i++;
		}
	}
	return (count);
}

char	**free_mem(char **split)
{
	int	n;

	n = 0;
	while (split[n])
	{
		free(split[n]);
		n++;
	}
	free(split);
	return (NULL);
}

char	*fill(char const *s, char c, int *error)
{
	char	*str;
	int		i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		*error = 1;
		return (NULL);
	}
	i = 0;
	while (*(s + i) && *(s + i) != c)
	{
		*(str + i) = *(s + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		n;
	int		error;

	if (!s)
		return (NULL);
	n = 0;
	error = 0;
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			*(arr + n++) = fill(s, c, &error);
			if (error)
				return (free_mem(arr));
			while (*s && *s != c)
				s++;
		}
	}
	*(arr + n) = NULL;
	return (arr);
}
