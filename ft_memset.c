/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:36:27 by chnaranj          #+#    #+#             */
/*   Updated: 2024/09/30 15:14:35 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char letter;
	size_t i;
	char *ptr;

	ptr = (char *) s;
	letter = (unsigned char) c;
	i = 0;
	while(i < n)
	{
		ptr[i] = letter;
		i++;
	}
	ptr[i] = '\0';
	return (s);
}
/*
int main ()
{
	char s[20];
	int c;
	size_t n;
	n = 15;
	c = 'R';
	printf("%s", ft_memset(s, c, n));
	return (0);
}*/
