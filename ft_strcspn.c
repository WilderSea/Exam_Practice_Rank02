#include <stdlib.h>


size_t ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    int spanned;
    char char_to_locate;

    j = 0;
    while(reject[j])
    {
        char_to_locate = reject[j];
        spanned = 0;
        i = 0;
        while(s[i])
        {
            if(s[i] == char_to_locate)
            {
                return (spanned);
            }
            spanned++;
            i++;
        }
        j++;
    }
    return (spanned);
}
