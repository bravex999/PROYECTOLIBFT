#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *result;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    end = ft_strlen(s1);

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
	result = (char *)malloc(end - start + 1);
    if (!result)
        return (NULL);

    ft_memcpy(result, s1 + start, end - start);
    result[end - start] = '\0';

    return (result);
}
int	main()
{
	char const *s1 = "Holachristianho";
	char const *set = "Holah";
	printf("%s", ft_strtrim (s1, set));
	return (0);
}
