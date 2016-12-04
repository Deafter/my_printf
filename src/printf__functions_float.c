/*
** printf__functions_float.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 22:43:17 2016 Thomas Lombard
** Last update Sun Dec 04 23:48:53 2016 Thomas Lombard
*/

#include "header.h"

static void	printf__putdouble(double		nbr,
				  t_printf_param	param,
				  t_printf_out		*out)
{
  while (param.prec_float > 0)
    {
      nbr *= 10;
      printf__putnbr((long)nbr, out);
      nbr -= (long)nbr;
      param.prec_float -= 1;
    }
}

void		printf__gest_f(va_list		ap,
			       t_printf_param	param,
			       t_printf_out	*out)
{
  double	nbr;

  nbr = va_arg(ap, double);
  param.prec -= param.prec_float;
  param.prec -= printf__nbrlen((long)nbr);
  if (nbr < 0)
    param.prec--;
  if (param.decal == false || param.decal == unknown)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(((param.o_aff) ? '0' : ' '), out);
    }
  printf__putnbr((long)nbr, out);
  if (nbr < 0)
    nbr *= -1.0;
  if (param.prec_float > 0)
    {
      printf__print('.', out);
      nbr -= (long)nbr;
      nbr *= m_pow(10, printf__nbrlen((long)nbr));
      printf__putdouble(nbr, param, out);
    }
}
