/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:44:50 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/13 10:40:32 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_isspace(char c);

// int	ft_atoi(const char *nptr)
// {
// 	size_t	res;
// 	int		signal;

// 	signal = 1;
// 	res = 0;
// 	while (ft_isspace(*nptr))
// 		nptr++;
// 	if (*nptr == 45 || *nptr == 43)
// 	{
// 		if (*nptr == '-')
// 			signal *= -1;
// 		nptr++;
// 	}
// 	else if (*nptr == 43)
// 		nptr++;
// 	while (ft_isdigit(*nptr))
// 		res = (res * 10) + (*nptr++ - 48);
// 	return (res * signal);
// }

// static int	ft_isspace(char c)
// {
// 	if (c == '\t'
// 		|| c == '\v'
// 		|| c == '\r'
// 		|| c == '\n'
// 		|| c == '\f'
// 		|| c == '\e'
// 		|| c == ' ')
// 		return (1);
// 	return (0);
// }

static int	ft_isspace(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	is_neg;

	is_neg = 0;
	res = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_neg = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
		res = (res * 10) + (*nptr++ - 48);
	if (is_neg)
		return (res * -1);
	return (res);
}
