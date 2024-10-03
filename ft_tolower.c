#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    return (c);
}
int main()
{
    int c;
    c = 'R';
    printf("%c", ft_tolower(c));
    return (0);
}
