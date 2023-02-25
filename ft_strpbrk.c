#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    char char_to_locate;
    char *located;

    i = 0;
    if (s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }
    while(s2[i])
    {
        char_to_locate = s2[i]; // c
        while(*s1)
        {
            if (*s1 == char_to_locate)
            {
                located = (char *)s1;
                return (located);
            }
            s1++;
        }
        i++;
    }
    return (NULL);
}
