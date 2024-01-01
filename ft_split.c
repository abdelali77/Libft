/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:27:54 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/29 19:10:49 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
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

static char	**free_mem(char **split)
{
	int	n;

	n = 0;
	while (*(split + n))
	{
		free(*(split + n));
		n++;
	}
	free(split);
	return (NULL);
}

static char	*fill(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
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

	if (!s)
		return (NULL);
	n = 0;
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			*(arr + n++) = fill(s, c);
			if (*(arr + n - 1) == NULL)
				return (free_mem(arr));
			while (*s && *s != c)
				s++;
		}
	}
	*(arr + n) = NULL;
	return (arr);
}
