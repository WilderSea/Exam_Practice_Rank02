#include <stdlib.h>


int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strcpy(char *s1, char *s2)
{
   
    int src_len;
    int i;

    src_len = ft_strlen(s2);
    s1 = malloc(sizeof(char) * (src_len + 1));
    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
