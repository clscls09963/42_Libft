/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <hyeykim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 03:32:34 by hyeykim           #+#    #+#             */
/*   Updated: 2021/01/15 18:46:22 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (s == 0)
		return ((void *)0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return ((void *)0);
	size = ft_strlen(s);
	if (size <= start)
	{
		str[0] = 0;
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
