int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}


char    *ft_strrev(char *str)
{
    int i;
    int str_len;
    char temp;
    
    i = 0;
    str_len = ft_strlen(str);
    while(i < str_len)
    {
        temp = str[i];
        str[i] = str[str_len - i - 1];
        str[str_len - i - 1] = temp;
        i++;
    }
    return (str);
}
