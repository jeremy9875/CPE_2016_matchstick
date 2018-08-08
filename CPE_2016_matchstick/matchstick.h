/*
** matchstick.h for matchstick in /home/jeremy.elkaim/CPE_2016_matchstick
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Feb 20 16:04:50 2017 jeremy elkaim
** Last update Mon Feb 20 16:19:22 2017 jeremy elkaim
*/

#ifndef _MATCHSTICK_H_
#define _MATCHSTICK_H_

#ifndef READ_SIZE
# define READ_SIZE 1
#endif /* !READ_SIZE */

# define TRUE 0
# define FALSE 1
# define SIZE_BUFF READ_SIZE + 1

void	my_putchar(char);
void	my_putstr(char *str);
int	my_getnbr(char *str);
char	*whatchar(int positionl, int positionh, int lenght, int height);
void	match(int y, int g);
char*	strchange(char **av, char *buffer);
int	main(int ac, char **av);

#endif
