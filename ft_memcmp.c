int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char  *src1;
    const char  *src2;
    size_t  i;

    src1 = (const char *) s1;
    src2 = (const char *) s2;
    i = 0;
    if (n == 0)
        return (0);
    {
        while (i < n && (src1[i] == src2[i]))
        i++;
    }
    if (i == n)
        return (0);
    return (src1[i] - src2[i]);    
 }
