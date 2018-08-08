/*
** make_tab.c for boggle in /home/Spiki/Colles/CPE_2016_stumper2/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 13:09:22 2017 Filliat Etienne
** Last update Wed Apr 26 16:07:16 2017 Filliat Etienne
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/boggle.h"

static int		get_size(int ac, char **av)
{
  int		i;
  
  i = 2;
  while (i <= ac)
    {
      if (my_strcmp(av[i - 1], "-w") == 0)
	{
	  if (av[i] != NULL)
	    return (my_getnbr(av[i]));
	}
      i++;
    }
  return (4);
}

static char		*get_inside(int ac, char **av)
{
  int			i;

  i = 2;
  while (i <= ac)
    {
      if (my_strcmp(av[i - 1], "-g") == 0)
	{
	  if (av[i] != NULL)
	    return(av[i]);
	}
      i++;
    }
  return (NULL);
}

static char	*init(char *tab, int size)
{
  int		i;

  i = 1;
  tab[0] = '+';
  while (i < (size * 2 + 2))
    {
      tab[i] = '-';
      i++;
    }
  tab[i] = '+';
  tab[i + 1] = '\0';
  return (tab);
}

static char	**make_tab(int size, char *inside)
{
  char		**tab;

  if (((tab = malloc(sizeof(char *) * (size + 3))) == NULL) ||
      ((tab[0] = malloc(sizeof(char) * (size * 2 + 3))) == NULL) ||
      ((tab[size + 1] = malloc(sizeof(char) * (size * 2 + 3))) == NULL) ||
      ((tab[size + 2] = malloc(sizeof(char) * (size * 2 + 3))) == NULL))
    return ((char **) 84);
  tab[0] = init(tab[0], size);
  tab = fill_tab(tab, inside, size);
  tab[size + 1] = init(tab[size + 1], size);
  tab[size + 2] = NULL;
  return (tab);
}

char		**get_tab(int ac, char **av)
{
  int		size;
  char		*inside;
  
  if ((size = get_size(ac, av)) <= 0)
    {
      my_err_putstr("Invalid size\n");
      return ((char **) 84);
    }
  if ((inside = get_inside(ac, av)) == NULL)
    {
      my_err_putstr("NULL -g parameter");
      return ((char **) 84);
    }
  if ((my_strlen(inside) % size) != 0)
    {
      my_err_putstr("Invalid number of parameters\n");
      return ((char **) 84);
    }
  return (make_tab(size, inside));
}
