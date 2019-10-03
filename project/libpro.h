#ifndef FT_LIBPRO_H
# define FT_LIBPRO_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_atoi(char *str);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strcat(char *dest, char *src);
int     ft_strlen(char *str);

#endif