/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:26:49 by jcaetano          #+#    #+#             */
/*   Updated: 2021/08/25 17:59:36 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((char *)dest)[i] = (unsigned char) c;
		i++;
	}
	return (dest);
}
