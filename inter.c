#include <unistd.h>


int ft_strchr(char *string, char c)
{
    int i;

    i = 0;
    while(string[i])
    {
        if (string[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int ft_revstrchr(char *string, char c, int pos)
{
    pos = pos - 1;
    while (pos >= 0)
    {
        if (string[pos] == c)
        {
            return (1);
        }
        pos--;
    }
    return (0);
}

void ft_inter(char *str_one, char *str_two)
{

    int i;

    i = 0;
    while(str_one[i])
    {
        if(ft_strchr(str_two, str_one[i]) == 1)
        {
            if (ft_revstrchr(str_one, str_one[i], i) == 0)
            {
                write(1, &str_one[i], 1);
            }
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_inter(argv[1], argv[2]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
