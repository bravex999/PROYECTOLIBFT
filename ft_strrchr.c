/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:15:57 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/05 18:04:58 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
		while (i >= 0 && s[i] != c)
			i--;
		if (i >= 0)
			return ((char *)&s[i]);
	}
	return (NULL);
}
/* 
int main()
{
      char    s[] = "Hola como estas";
      int c;
      c = 'o';
      printf("%s", ft_strrchr(s, c));
      return (0);
}*/
