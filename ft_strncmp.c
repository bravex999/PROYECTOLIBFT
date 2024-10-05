/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:45:59 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/05 13:48:55 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	if (i == n && s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main ()
{
    char    s1 [] = "holaa";
    char    s2 [] = "hola"; 
    size_t n;
    n = 4;
    printf("%d", ft_strncmp(s1, s2, n));
    return (0);
}*/
