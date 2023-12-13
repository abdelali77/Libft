/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:41:17 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/13 10:17:22 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;
	int		i;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	i = 0;
	while (*(s2 + i))
	{
		*(str + s1_len) = *(s2 + i);
		s1_len++;
		i++;
	}
	*(str + s1_len) = '\0';
	return (str);
}
