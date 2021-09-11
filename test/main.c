#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int		main(void)
{
	char const *s = "split-this-for-me-!";
	char c = '-';
	char **array = ft_split(s, c);
	char const *s2 = "xxfabcxxffcd";
	char c2 = 'f';
	char **array2 = ft_split(s2, c2);
	char const *s3 = "fxxxxxx";
	char c3 = 'f';
	char **array3 = ft_split(s3, c3);
	char const *s4 = "xxxxxx";
	char c4 = 'f';
	char **array4 = ft_split(s4, c4);
	int i = 0;


	printf("String: %s | Delimiter: %c\n", s, c);
	while(array[i] != (char *)'\0')
	{
		printf("%s\n", array[i]);
		++i;
	}
	i = 0;
	printf("String: %s | Delimiter: %c\n", s2, c2);
	while(array2[i] != (char *)'\0')
	{
		printf("%s\n", array2[i]);
		++i;
	}
	i = 0;
	printf("String: %s | Delimiter: %c\n", s3, c3);
	while(array3[i] != (char *)'\0')
	{
		printf("%s\n", array3[i]);
		++i;
	}
	i = 0;
	printf("String: %s | Delimiter: %c\n", s4, c4);
	while(array4[i] != (char *)'\0')
	{
		printf("%s\n", array4[i]);
		++i;
	}
	return (0);
}
