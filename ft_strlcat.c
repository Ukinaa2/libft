#include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (*(src + j) && i + j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + ft_strlen(src));
}

int	main(void)
{
	int	i;
	char	s1[30] = "gabriel";
	char	s2[30] = "guedes";
	
	i = ft_strlcat(s1, s2, 8);
	printf("ft_strlcat:\ni = %i\n%s\n", i, s1);
	return (0);
}
