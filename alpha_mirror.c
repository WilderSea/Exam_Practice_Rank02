#include <unistd.h>

void ft_alpha_mirror(char *str)
{
    int i;
    int pos;

    i = 0;
    pos = 1;
    while(str[i])    
    {
        if (str[i] >= 'a' && str[i] <= 'm')
        {
            pos = (str[i] - 'a') + 1;
            str[i] = ('z' - pos) + 1;
        }
        else if (str[i] >= 'n' && str[i] <= 'z')
        {
            pos = ('z' - str[i]) + 1;
            str[i] = ('a' + pos) - 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'M')
        {
            pos = (str[i] - 'A') + 1;
            str[i] = ('Z' - pos) + 1;
        }
        else if (str[i] >= 'N' && str[i] <= 'Z')
        {
            pos = ('Z' - str[i]) + 1;
            str[i] = ('A' + pos) - 1;
        }
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_alpha_mirror(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
