/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:56:33 by chnaranj          #+#    #+#             */
/*   Updated: 2024/09/28 17:29:06 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return  (0);
}

int	main()
{
	int	c;
	c = '7';

	int	result;
	result = ft_isdigit(c);
	write(1, &(char){result+'0'}, 1);
}


