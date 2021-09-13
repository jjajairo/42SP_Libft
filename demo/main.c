#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	const char *nptr1 = "9223372036854775807";
	const char *nptr2 = "9223372036854775807";

	printf("ft_atoi: %d\n", ft_atoi(nptr1));
	printf("--------------------------------\n");
	printf("atoi: %d\n\n", atoi(nptr2));
	if (ft_atoi(nptr1) == atoi(nptr2))
		printf("OK\n");
	else
		printf("Error\n");
	return (0);
}
