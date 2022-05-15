/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:22:42 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/14 23:37:35 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s + i) != (unsigned char)c && i < n)
		i++;
	if (*(unsigned char *)(s + i) == (unsigned char)c)
		return ((void *)s + i);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = ".abcdefjsadjsaaa";
	void	*p;

	p = ft_memchr(s1, '.', 0);
	printf("%s\n", (char *)p);
	return (0);
}
