/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tipereir <tipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:36:41 by tipereir          #+#    #+#             */
/*   Updated: 2023/04/13 15:03:25 by tipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
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
        printf("%c", ft_toupper(str[i]));
		i++;
    }
    printf("\n");
    
    return 0;
}
*/