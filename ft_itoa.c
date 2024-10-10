/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:54:34 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/10 16:28:41 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0 )
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*num;
	const char	*digits;
	long		nb;

	digits = "0123456789";
	nb = n;
	len = ft_numlen(n);
	num = (char *)calloc(len + 1, sizeof(char));
	if (!num)
		return (NULL);
	if (nb == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	num [len] = '\0';
	while (nb > 0)
	{
		num[--len] = digits[nb % 10];
		nb /= 10;
	}
	return (num);
}
/*
int main(void)
{
    ft_putendl_fd(ft_itoa(-2147483648), 1);
    ft_putendl_fd(ft_itoa(0), 1);
    ft_putendl_fd(ft_itoa(12345), 1);
    return 0;
}*/
