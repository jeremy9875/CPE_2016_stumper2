/*
** str_fcts.c for boggle in /home/Spiki/Colles/CPE_2016_stumper2/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 12:23:50 2017 Filliat Etienne
** Last update Wed Apr 26 14:23:07 2017 Filliat Etienne
*/

void		my_strcpy(char *src, char *dest)
{
  int		i;

  i = 0;
  while (src != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
}

int		my_getnbr(char *str)
{
  int		res;
  int		i;
  int		signe;
  
  i = 0;
  res = 0;
  signe = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	signe *= -1;
      i++;
    }
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '0')
	return (-1);
      res *= 10;
      res += str[i] - 48;
      i++;
    }
  return (res * signe);
}

int		my_strcmp(char *str1, char *str2)
{
  int		i;

  i = 0;
  while (str1[i] != '\0' || str2[i] != '\0')
    {
      if ((str1[i] - str2[i]) > 0 || (str1[i] - str2[i]) < 0)
	return (1);
      i++;
    }
  return (0);
}
