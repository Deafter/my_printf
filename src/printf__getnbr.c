/*
** printf_getnbr.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 15:49:57 2016 Thomas Lombard
** Last update Fri Nov 18 22:51:25 2016 Thomas Lombard
*/

#include "header.h"

int	printf__getnbr(char	**format)
{
  int	nb;
  int	save;

  nb = 0;
  save = 0;
  while (isdigit(**format))
    {
      nb += **format - '0';
      if (isdigit(*(*format + 1)))
	nb *= 10;
      if (nb < save)
	return (save);
      ++(*format);
    }
  return (nb);
}

int	printf__nbrlen(long nbr)
{
  int		ret;

  ret = 0;
  nbr = m_abs(nbr);
  if (nbr == 0)
    return (0);
  while (nbr > 0 && nbr / 10)
    {
      nbr /= 10;
      ret++;
    }
  return (ret + 1);
}
