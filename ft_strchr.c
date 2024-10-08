/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:30:33 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/08 14:45:23 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] && s[i] != c)
			i++;
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int main()
{
    char    s[] = "Hola como estas";
    int c;
    c = 'm';
    printf("%s", ft_strchr(s, c));
    return (0);
}
*/
