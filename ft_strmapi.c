/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:44:19 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/26 13:35:04 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	if (!f)
		return (ft_strdup(s));
	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*(s + i))
	{
		*(str + i) = (*f)(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
