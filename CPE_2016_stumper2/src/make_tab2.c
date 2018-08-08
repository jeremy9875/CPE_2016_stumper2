/*
** make_tab2.c for boggle in /home/Spiki/Colles/CPE_2016_stumper2
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 15:06:11 2017 Filliat Etienne
** Last update Wed Apr 26 15:55:50 2017 Filliat Etienne
*/

#include <stdlib.h>
#include <unistd.h>

char		**fill_tab(char **tab, char *inside, int size)
{
  int		i;
  int		x;
  int		y;
  
  i = 1;
  x = 0;
  y = 2;
  if ((tab[i] = malloc(sizeof(char) * (size * 2 + 3))) == NULL)
    return ((char **) 84);
  tab[i][0] = '|';
  tab[i][1] = ' ';
  while (inside[x] != '\0')
    {
      tab[i][y++] = inside[x++];
      tab[i][y++] = ' ';
      if ((x % size) == 0)
	{
	  tab[i][y++] = '|';
	  tab[i++][y++] = '\0';
	  if ((tab[i] = malloc(sizeof(char) * (size * 2 + 3))) == NULL)
	    return ((char **) 84);
	  y = 0;
	  tab[i][y++] = '|';
	  tab[i][y++] = ' ';
	}
    }
  return (tab);
}
