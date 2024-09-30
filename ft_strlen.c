/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:03:31 by chnaranj          #+#    #+#             */
/*   Updated: 2024/09/30 13:33:12 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t		len;
	const char	*s;

	s = str;
	len = 0;
	if (s)
	{
		while (s[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
/*	
int	main ()
{
	const char str[] = "Hola como estas";

	printf("%zu", ft_strlen(str));
	return (0);
}*/
