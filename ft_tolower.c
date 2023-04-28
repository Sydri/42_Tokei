/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tipereir <tipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:36:44 by tipereir          #+#    #+#             */
/*   Updated: 2023/04/13 15:09:26 by tipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		return (c);
	return (c);
}

/*int main(void)
{
    char str[] = "Eae GatXinhA 42";
    int i = 0;
    
    while (str[i] != '\0')
    {
        printf("%c", ft_tolower(str[i]));
		i++;
    }
    printf("\n");
    
    return 0;
}
*/