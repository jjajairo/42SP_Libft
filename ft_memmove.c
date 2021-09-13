/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 08:06:35 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/13 09:14:43 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*s;
	char	*d;

	if (src > dest)
		ft_memcpy(dest, src, size);
	s = (char *)src;
	d = (char *)dest;
	while (size--)
		d[size] = s[size];
	return (dest);
}
