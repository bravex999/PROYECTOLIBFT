#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b = -b;
	}
	if (b > 9)
		ft_putnbr_fd(b / 10, fd);
	ft_putchar_fd(b % 10 + '0', fd);
}

int	main(void)
{
	ft_putnbr_fd(12345, 1);         // Debería imprimir "12345"
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-6789, 1);         // Debería imprimir "-6789"
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);   // Debería imprimir "-2147483648"
	ft_putchar_fd('\n', 1);
	return (0);
}

