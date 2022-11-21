#include <stdio.h>

void	fizzbuzz(int start, int end);

int     ft_str_is_numeric(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if ((str[i] < 48 || str[i] > 57))
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int     ft_atoi(char *str)
{
        int     i;
        int     n;
        int     s;

        i = 0;
        while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        {
                i++;
        }
        n = 1;
        while (str[i] == 43 || str[i] == 45)
        {
                if (str[i] == 45)
                {
                        n *= -1;
                }
                i++;
        }
        s = 0;
        while (str[i] >= 48 && str[i] <= 57)
        {
                s = (s * 10) + (str[i] - 48);
                i++;
        }
        return (n * s);
}

int     main(int argc, char **argv)
{
        int             start;
        int             end;
        int             tmp;

        if (!(ft_str_is_numeric(argv[1]) && ft_str_is_numeric(argv[2])))
        {
                printf("Error\n");
                return (0);
        }
        argc = 3;
        start = ft_atoi(argv[1]) - argc + 3;
        end = ft_atoi(argv[2]);
        if (start == end)
        {
                printf("Error\n");
                return (0);
        }
        else if (start > end)
        {
                tmp = end;
                end = start;
                start = tmp;
        }
        fizzbuzz(start, end);
        return (0);
}

