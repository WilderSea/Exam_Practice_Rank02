#include <unistd.h>

void ft_putchar(int i)
{
    i = i + '0';
    write(1, &i, 1);
}

void ft_putnbr(int num)
{
    
    while (num >= 10)
    {
        ft_putnbr(num / 10);
        num = num % 10;
    }
    ft_putchar(num);
}

void ft_fizzbuzz()
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            write(1, "fizzbuzz", 8);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            ft_putnbr(i);
        }
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    ft_fizzbuzz();
    return (0);
}
