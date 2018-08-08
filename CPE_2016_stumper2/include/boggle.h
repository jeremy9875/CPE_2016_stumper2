/*
** boogle.h for boogle in /home/Spiki/Colles/CPE_2016_stumper2/include
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Apr 26 12:48:47 2017 Filliat Etienne
** Last update Wed Apr 26 15:29:08 2017 Filliat Etienne
*/

#ifndef BOOGLE_H_
# define BOOGLE_H_

int	my_strcmp(char *, char *);
int	my_strlen(char *);
int	my_getnbr(char *);
char	**get_tab(int, char **);
char	**fill_tab(char **, char *, int);
void	my_err_putstr(char *);
void	my_putchar(char c);
void	my_putstr(char *str);
void	help(char **av);
int	badword(char *word);
int	goodword(char **str);
int	showtab(char **str);
char	*readword();
char	countcharlow(char **str, int size, int i, int index);
char	countcharupp(char **str, int size, int i, int index);
char	nextchar(char **str, int i, int index);
char	prevchar(char **str, int i, int index);

#endif /* !BOOGLE_H_ */
