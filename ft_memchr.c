/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:58:28 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/10 06:41:09 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const char	*p;
	int			i;

	p = ptr;
	i = 0;
	while (i < (int)n)
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
		i++;
	}
	return (NULL);
}
