#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_do_op(char **argus)
{
    int first;
    int second;
    int result;
    char o;

    first = atoi(argus[1]);
    second = atoi(argus[3]);
    result = 0;
    o = *(argus[2]);
    if (o == '+')
    {
        result = first + second;
    }
    else if (o == '-')
    {
        result = first - second;
    }
    else if (o == '*')
    {
        result = first * second;
    }
    else if (o == '/')
    {
        result = first / second;
    }
    printf("%d\n", result);
}


int main(int argc, char **argv)
{
    if (argc == 4)
    {
        ft_do_op(argv);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
