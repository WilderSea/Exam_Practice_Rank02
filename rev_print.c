#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void ft_rev_print(char *str)
{
    int i;
    int str_len;

    i = 0;
    str_len = ft_strlen(str);
    while(str_len > 0)
    {
        write(1, &str[str_len - 1], 1);
        str_len--;
    }

}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_rev_print(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }

    return (0);
}
