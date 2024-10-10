#include "libft.h"

static int	ft_numlen(int n)
{
	int len = 0;

	if (n <= 0)
		len++; 
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;
	const char *digits = "0123456789";
	long	nb = n; 

	len = ft_numlen(n);
	num = (char *)calloc(len + 1, sizeof(char)); 
	if (!num)
		return (0);
	if (nb == 0)
		num[0] = '0';
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	while (nb)
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
