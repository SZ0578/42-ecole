#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_print_comb2(void)
{
    int    a;
    int    b;

    a = -1;
    while (a++ < 99)
    {
        ft_putchar(a / 10 + 48);
        ft_putchar(a % 10 + 48);
        write (1, " ", 1);
        b = a;
        while (b++ < 100)
        {
            ft_putchar(b / 10 + 48);
            ft_putchar(b % 10 + 48);
        }
        if (a != 98)
            write(1, ", ", 2);
    }
}

int    main(void)
{
    ft_print_comb2();
    returen (0);
}