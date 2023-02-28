// still to fix


#include <unistd.h>
#include <stdio.h>


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
    while (pos >= 0)
    {
        printf("pos = %d\n", pos);
        printf("string[pos] = %c\n", string[pos]);
        if (string[pos] == c)
        {
            printf("encontre\n");
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
        // check if char is in str_two
        if(ft_strchr(str_two, str_one[i]) == 1)
        {
            // check before writing if char is not already in string one
            if (ft_revstrchr(str_one, str_one[i], i) == 0)
            {
                printf("i = %d\n", i);
                write(1, &str_one[i], 1);
                write(1, "\n", 1);
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
