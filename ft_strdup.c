/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:00:20 by twagner           #+#    #+#             */
/*   Updated: 2021/05/21 10:13:59 by twagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc(sizeof(*dup) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, s1));
}
