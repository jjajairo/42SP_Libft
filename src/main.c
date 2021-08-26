/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 07:20:32 by jcaetano          #+#    #+#             */
/*   Updated: 2021/08/26 07:23:49 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../lib/libft.h"

int	main(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 'a';
	c2 = '9';
	c3 = '#';
	printf("c1: %c | ft_isalnum: %d\n", c1, ft_isalnum(c1));
	printf("c2: %c | ft_isalnum: %d\n", c2, ft_isalnum(c2));
	printf("c3: %c | ft_isalnum: %d\n", c3, ft_isalnum(c3));
	return (0);
}
