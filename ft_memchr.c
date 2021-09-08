/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:58:28 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/08 11:37:24 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	const char	*p;
	int			i;

	p = ptr;
	i = 0;
	while (i < (int)n)
	{
		if (*p == (unsigned char)value)
			return ((char *)p);
		p++;
		i++;
	}
	return (NULL);
}
