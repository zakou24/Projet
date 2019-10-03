#include "libpro.h"

void rush(char *vert, char *hor)
{
    int x;
    int y;
    int v;
    int h;

    x = ft_atoi(vert);
    y = ft_atoi(hor);
    v = 1;
    h = 1;
    if (x > 0 && y > 0)
    {
        if (x == 1 && y == 1)
            ft_putchar('o');
        else
        {
            while (h <= y)
            {
                if (h == 1)
                {
                    while (v <= x)
                    {
                        if (v == 1)
                            ft_putchar('o');
                        else if (v != x)
                            ft_putchar('-');
                        else
                            ft_putchar('o');
                        v++;
                    }
                }
                else if (h < y)
                {
                    v = 1;
                    ft_putchar('\n');
                    while (v <= x)
                    {
                        if (v == 1)
                            ft_putchar('|');
                        else if (v != x)
                            ft_putchar(' ');
                        else
                            ft_putchar('|');
                        v++;
                    }
                }
                else
                {
                    v = 1;
                    ft_putchar('\n');
                    while (v <= x)
                    {
                        if (v == 1)
                            ft_putchar('o');
                        else if (v != x)
                            ft_putchar('-');
                        else
                            ft_putchar('o');
                        v++;
                    }
                }
                h++;
            }
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        rush(av[1], av[2]);
        ft_putchar('\n');
    }
    else
        printf("Veuillez entrer seulement deux éléments\n");
    return (0);
}