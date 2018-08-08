/*
** help.c for boggle in /home/Spiki/Colles/CPE_2016_stumper2
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 13:14:05 2017 Filliat Etienne
** Last update Wed Apr 26 14:08:01 2017 Filliat Etienne
*/

#include <unistd.h>
#include "../include/boggle.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void		my_err_putstr(char *str)
{
  write(2, str, my_strlen(str));
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	help(char **av)
{
  my_putstr("USAGE\n\t   ");
  my_putstr(av[0]);
  my_putstr(" [-s SIZE] [-g GRID] [-w WORD]");
  my_putstr("\n\nDESCRIPTION\n\t   -s SIZE    defines the size of a");
  my_putstr(" side of the grid (def: 4)\n\t   -g GRID    specifies ");
  my_putstr("a hard-coded grid (MANDATORY).\n\t\t      If the grid does");
  my_putstr(" not contain the correct number of characters,\n\t\t");
  my_putstr("      you must display an error\n\t   -w WORD    force the");
  my_putstr(" word to be looked for\n");
}
