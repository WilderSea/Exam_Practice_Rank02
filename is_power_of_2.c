int is_power_of_2(int number)
{
    int start;

    start = 1;
    while(start <= number)
    {
        if (start == number)
        {
            return (1);
        }
        start = start * 2;
    }
    return (0);
}
