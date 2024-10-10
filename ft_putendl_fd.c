#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

int	main(void)
{
	ft_putendl_fd("Hola, mundo!", 1); // Imprime "Hola, mundo!" seguido de un salto de línea
	ft_putendl_fd(NULL, 1);           // No imprime nada porque s es NULL
	return (0);
}
