
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    else
    {
        return (c);
    }
}
/*
int main ()
{
    int c;
    c = 's';
    printf("%c",ft_toupper(c));
}*/
