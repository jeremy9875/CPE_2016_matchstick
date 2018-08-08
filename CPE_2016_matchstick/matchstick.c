/*
** matchstick.c for matchstick in /home/jeremy.elkaim/CPE_2016_matchstick
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Feb 21 08:52:49 2017 jeremy elkaim
** Last update Mon Feb 27 09:24:54 2017 jeremy elkaim
*/
#include "matchstick.h"
#include <stdlib.h>

void	whatchar2(int positionl, int positionh,int lenght, int height, char *buffer, int i)
{
  if (positionl == 1 && positionh == 1)
    {
      buffer[i] = '*';
      i = i + 1;
    }
  else if (positionl == 1 && positionh == height)
    {
      buffer[i] = '*';
      i = i + 1;
    }
  else if (positionl == lenght && positionh == 1)
    {
      buffer[i] = '*';
      i = i + 1;
    }
  else if (positionl == lenght && positionh == height)
    {
      buffer[i] = '*';
      i = i + 1;
    }
}

char	*whatchar(int positionl, int positionh, int lenght, int height)
{
  char	*buffer;
  int	i;

  i = 0;
  buffer = malloc(sizeof(char) * height);
  i = 0;
  if (lenght == 1 || height == 1)
    {
      buffer[i] = '*';
      i = i + 1;
    }
  whatchar2(positionl, positionh, lenght, height, buffer, i);
  if (positionl != 1 && positionl != lenght && positionh != 1
	   && positionh != height + 1 && positionh != height)
    {
      buffer[i] = '|';
      i = i + 1;
    }
  else
    {
      buffer[i] = '*';
      i = i + 1;
    }
  i = i + 1;
  return (buffer);
}

int	main(int ac, char **av)
{
  int	h;
  int	l;
  int	i;
  int	u;
  char	*buffer;

  buffer = malloc(sizeof(char) * 100);
  i = 0;
  l = 5;
  h = 3;
  buffer = strchange(av, buffer);
  u = my_getnbr(buffer);
  if (ac == 3)
    {
      if (u >= 1 && u <= 3100)
	{
	  if (u == 3100)
	    {
	      u = u - 3000;	  
	    }
	  if (u >= 200 && u <= 299)
	    {
	      u = u - 200;
	    }
	  if (u >= 0 && u <= 19)
	    {
	      u = u - 10;
	    }
	  h = u + u + 2 - 1;
	  l = u + 2;
	}
      else
	my_putstr("invalid number between 1 to 100");
      match(h,l);
    }
  else
    my_putstr("enter 2 arguments");
}
