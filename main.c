#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	printf("ft_isalpha:\n");
	for (i = 0; i <= 127; i++)
		printf("%i = %i", i, ft_isalpha(i));
	printf("\n");
	return (0);
}
