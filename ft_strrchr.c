/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbragagi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:02:29 by sbragagi          #+#    #+#             */
/*   Updated: 2024/03/16 13:51:27 by sbragagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			ptr = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)ptr);
}
