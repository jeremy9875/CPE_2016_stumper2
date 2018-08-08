#include "../include/boggle.h"
#include <unistd.h>

int	showtab(char **str)
{
  int	i;
  int	index;
  int	q;

  q = 1;
  i = 0;
  index = 0;
  while (str[i] != NULL)
    {
      if (str[i][index] == '\0' && str[i + 1] != NULL)
	{
	  my_putchar('\n');
	  i = i + 1;
	  index = 0;
	}
      else
	{
	  my_putchar(str[i][index]);
	  index = index + 1;
	}
    }
    my_putchar('\n');
  return (0);
}

char	*readword()
{
  char	*word;

  read(0, word, 200);
  return (word);
}

int	badword(char *word)
{
  my_putstr("The word");
  my_putchar(34);
  my_putstr(word);
  my_putchar(34);
  my_putstr("is not in the grid.");
  return (0);
}

int	goodword(char **str)
{
  showtab(str);
  return (0);
}
