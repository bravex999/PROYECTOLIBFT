/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:32:09 by chnaranj          #+#    #+#             */
/*   Updated: 2024/09/30 16:33:36 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
int main(void)
{
	int c;
	char result;

	c = 'u';
	result = ft_isprint(c);
	write(1, &(char){result + '0'}, 1);
	return (0);
}*/
