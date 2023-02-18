#include <unistd.h>


void ft_putchar_num(char c, int repeat)
{
    while (repeat > 0)
    {
        write(1, &c, 1);
        repeat--;
    }
}

void ft_repeat_alpha(char *str)
{
    int i;
    int repeat;

    i = 0;
    repeat = 1;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            repeat = (str[i] - 'a') + 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            repeat = (str[i] - 'A') + 1;
        }
        else
        {
            repeat = 1;
        }
        ft_putchar_num(str[i], repeat);
        i++;
    }
    write(1, "\n", 1);

}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_repeat_alpha(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
