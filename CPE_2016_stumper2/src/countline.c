char	countcharlow(char **str, int size,int i, int index)
{
  char	c;

  if (str[i][index - size - 2] >= 97 && str[i][index - size - 2] <= 122)
    c = str[i][index - size - 2]; //if maj - 32
  else
    return (84);
  return (c);
}

char	countcharupp(char **str, int size, int i, int index)
{
  char	c;
  
  if (str[i][index + size + 2] >= 97 && str[i][index + size + 2] <= 122)
    c = str[i][index + size + 2];//if maj - 32
  else
    return (84);
  return (c);
}

char	nextchar(char **str, int i, int index)
{
  char	c;

  if (str[i][index+1] >= 97 || str[i][index+1] <= 122)
      c = str[i][index+1];//if maj - 32
  else
    return (84);
  return (c);
}

char	prevchar(char **str, int i, int index)
{
  char	c;

  if (str[i][index-1] >= 97 || str[i][index-1] <= 122)
      c = str[i][index-1];//if maj - 32
    else
    return (84);
  return (c);
}
