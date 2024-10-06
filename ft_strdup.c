#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	char *dup;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	dup = ((char *) malloc(len + 1));
	if (!dup)
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int  main ()
{
	const char	*s = "hola como estas";
	printf("%s", ft_strdup(s));
	return (0);
}*/
