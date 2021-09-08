/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:06:46 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/02 19:33:05 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	const char	*s;

	s = src + (ft_strlen(src));
	while (s >= src)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
