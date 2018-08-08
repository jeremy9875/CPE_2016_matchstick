/*
** match.c for match in /home/jeremy.elkaim/CPE_2016_matchstick
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Feb 20 16:09:58 2017 jeremy elkaim
** Last update Sun Feb 26 20:19:45 2017 jeremy elkaim
*/
#include <unistd.h>
#include <stdlib.h>
#include <matchstick.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void     my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str = str + 1;
    }
}

int     my_getnbr(char *str)
{
  int   nb;

  while (*str)
    {
      if (*str <= 57 && *str >= 48)
        {
          nb = nb * 10;
          nb += *str - 48;
        }
      else
        return (nb);
      str = str + 1;
    }
  return (nb);
}

void    match(int y, int g)
{
  int   l;
  int   h;

  l = 1;
  h = 1;
  if (y < 1 || g < 1)
    my_putstr("Invalid size");
  else
    {
      while (h <= g)
        {
          while (l <= y)
            {
              my_putstr(whatchar(l, h, y, g));
              l = l + 1;
            }
          my_putchar('\n');
          l = 1;
          h = h + 1;
        }
    }
}

char*   strchange(char **av, char *buffer)
{
  int   o;
  int   u;

  u = 0;
  o = 0;
  while (av[1][o] != '\0')
    {
      buffer[u] = av[1][o];
      u = u + 1;
      o = o + 1;
    }
  return (buffer);
}
