#ifndef FT_LIBPRO_H
# define FT_LIBPRO_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_atoi(char *str)
{
    int i;
    int neg;
    int nb;

    i = 0;
    neg = 1;
    nb = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return (nb * neg);
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

#endif