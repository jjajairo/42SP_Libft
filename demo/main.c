#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	n[40] = "99999999999999999999999999";
	// char	n2[40] = "-99999999999999999999999999";
	int		i1 = atoi(n);
	int		i2 = ft_atoi(n);

	printf("atoi: %d\n", i1);
	printf("ft_atoi: %d\n", i2);
	if (i1 == i2)
	{
		printf("TEST_SUCCESS\n");
		return (1);
	}
	printf("TEST_KO\n");
	return (0);
}
