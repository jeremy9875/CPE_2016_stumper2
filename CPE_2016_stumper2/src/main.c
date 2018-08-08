/*
** main.c for boggle in /home/Spiki/Colles/CPE_2016_stumper2/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 12:21:02 2017 Filliat Etienne
** Last update Wed Apr 26 16:09:18 2017 Filliat Etienne
*/

#include <unistd.h>
#include "../include/boggle.h"

static int		flag_checker(int ac, char **av)
{
  int		i;

  i = 2;
  while (i <= ac)
    {
      if (my_strcmp(av[i - 1], "-g") == 0)
	{
	  if (av[i] != NULL)
	    return (0);
	}
      i++;
    }
  return (84);
}


void		my_showtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

int		main(int ac, char **av)
{
  char		**playtab;
  char		**savetab;

  if (ac == 1)
    return (84);
  else if (av[1][0] == '-' && av[1][1] == 'h')
    {
      help(av);
      return (0);
    }
  else if (flag_checker(ac, av) == 84)
    return (84);
  if ((playtab = get_tab(ac, av)) == (char **) 84)
    return (84);
  if ((savetab = get_tab(ac, av)) == (char **) 84)
    return (84);
  my_showtab(playtab);
  return (0);   
}
