/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:48:37 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/14 11:50:49 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		n;

	if (!s1 || !set)
		return (NULL);
	n = ft_strlen(s1);
	i = 0;
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	while (*(s1 + i) && ft_strchr(set, *(s1 + n - 1)))
		n--;
	return (ft_substr(s1, i, n - i));
}
