/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:05:12 by jcaetano          #+#    #+#             */
/*   Updated: 2021/08/26 06:57:26 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	char	*res;
	size_t	i;

	res = dest;
	while (length--)
	{
		*res++ = ((char *)src)[i];
		i++;
	}
	return (dest);
}
