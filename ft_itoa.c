/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:56:13 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/25 15:50:24 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long num)
{
	int	i;

	if (num == 0)
		i = 1;
	else
		i = 0;
	while (num != 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

static char	*reversed_string(char *s)
{
	int		i;
	int		j;
	char	c;

	j = 0;
	i = ft_strlen(s) - 1;
	while (i > j)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		negative;
	long	m;

	m = n;
	i = 0;
	negative = (m < 0);
	if (negative)
		m = -m;
	str = ft_calloc(count_digits(m) + negative + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (m)
	{
		*(str + i) = m % 10 + '0';
		m /= 10;
		i++;
	}
	if (negative)
		*(str + i) = '-';
	if (i == 0)
		*(str + i) = '0';
	return (reversed_string(str));
}
