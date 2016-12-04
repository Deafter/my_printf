/*
** printf_functions_chars.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 23:17:45 2016 Thomas Lombard
** Last update Sun Dec 04 23:48:36 2016 Thomas Lombard
*/

#include "header.h"

void		printf__gest_c(va_list			ap,
			       UNUSED t_printf_param	param,
			       t_printf_out		*out)
{
  printf__print(va_arg(ap, int), out);
}

void		printf__gest_s(va_list		ap,
			       t_printf_param	param,
			       t_printf_out	*out)
{
  uint32_t	nbr;
  char		*wr;

  wr = va_arg(ap, char *);
  nbr = my_strlen(wr);
  param.prec -= nbr;
  if (param.decal == false || param.decal == unknown)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
  printf__putstr(wr, -1, out);
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}

void		printf__gest_S(va_list		ap,
			       t_printf_param	param,
			       t_printf_out	*out)
{
  uint32_t	nbr;
  char		*wr;

  wr = va_arg(ap, char *);
  nbr = my_strlen(wr);
  param.prec -= nbr;
  if (param.decal == false || param.decal == unknown)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
  printf__sputstr(wr, -1, out);
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}
