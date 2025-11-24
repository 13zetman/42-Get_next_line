/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asylla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:37:49 by asylla            #+#    #+#             */
/*   Updated: 2025/11/24 12:58:41 by asylla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

static char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	char	*ptr;
	size_t	len;

	if (!s2)
		return (NULL);
	if (s1)
		len = ft_strlen(s1);
	else
		len = 0;
	result = (char *)malloc(sizeof(char) * (len + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	ptr = result;
	if (s1)
		ptr = ft_strcpy(ptr, s1);
	ft_strcpy(ptr, s2);
	return (result);
}
