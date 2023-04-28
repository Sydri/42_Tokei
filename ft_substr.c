/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tipereir <tipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:06:39 by tipereir          #+#    #+#             */
/*   Updated: 2023/04/20 10:19:38 by tipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len - start < len)
		len = s_len - start;
	if (start > s_len)
		len = 0;
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	s_len = 0;
	while (s_len < len)
	{
		newstr[s_len] = s[start + s_len];
		s_len++;
	}
	newstr[len] = '\0';
	return (newstr);
}
