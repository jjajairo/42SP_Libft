/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:16:29 by jcaetano          #+#    #+#             */
/*   Updated: 2021/08/26 19:21:00 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	res;
	size_t	length;

	res = 0;
	size--;
	length = ft_strlen(src);
	if (size == 0)
		return (length);
	while (res < size && src[res] != '\0')
	{
		dest[res] = src[res];
		res++;
	}
	dest[res] = '\0';
	return (length);
}
