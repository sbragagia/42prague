/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbragagi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:59:42 by sbragagi          #+#    #+#             */
/*   Updated: 2024/03/16 13:53:49 by sbragagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!n)
		return (i);
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
