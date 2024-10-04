#include "libft.h"

char    *ft_strchr(char *s, int c)
{
    int i;
    
    i = 0;
    if (s)
    {
        while (s[i] && s[i] != c)
            i++;
        if (s[i] == c)
        return (&s[i]);
    }    
    return (NULL);
}

int main()
{
    char    s[] = "Hola como estas";
    int c;
    c = 'm';
    printf("%s", ft_strchr(s, c));
    return (0);
}
    
