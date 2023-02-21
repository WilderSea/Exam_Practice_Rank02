#include <unistd.h>
#include <stdlib.h>


char ft_to_lowercase(char c)
{
    c = c + 32;
    return (c);
}


void ft_camel_to_snake(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = ft_to_lowercase(str[i]);
            write(1, "_", 1);
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_camel_to_snake(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
