#include <unistd.h>

int ft_search_replace(char **argus)
{
    int i;
    char s;
    char r;
   
    i = 0;
    s = argus[2][0];
    r = argus[3][0];
    if ((argus[2][1]) || (argus[3][1]))
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argus[1][i])
    {
        if (argus[1][i] == s)
        {
            argus[1][i] = r;
        }
        write(1, &argus[1][i], 1);
        i++;
    }
    return (0);
}


int main(int argc, char **argv)
{
    if (argc == 4)
    {
        ft_search_replace(argv);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
