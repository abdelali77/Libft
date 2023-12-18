/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:03:02 by abmahfou          #+#    #+#             */
/*   Updated: 2023/12/17 10:31:16 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc_ptr;

	calloc_ptr = malloc(count * size);
	if (calloc_ptr == NULL)
		return (NULL);
	ft_bzero(calloc_ptr, count * size);
	return (calloc_ptr);
}
