/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:30:34 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/19 11:03:14 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	nbytes;
	void	*p;

	nbytes = num * size;
	p = malloc(nbytes);
	if (!p)
		return (0);
	ft_bzero(p, nbytes);
	return (p);
}
