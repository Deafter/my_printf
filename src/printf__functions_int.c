/*
** printf_functions_int.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 11:24:32 2016 Thomas Lombard
** Last update Wed Dec 07 19:46:46 2016 Thomas Lombard
*/

#include <stdint.h>
#include "header.h"

static void	printf__before_print_di(long		nbr,
					t_printf_param	*param,
					t_printf_out	*out)
{
  --param->prec;
  if (nbr > 0 && param->o_aff)
    printf__print('+', out);
  while (param->prec > 0 && param->prec--)
    printf__print(((param->o_aff) ? '0' : ' '), out);
  if (nbr > 0 && !param->o_aff)
    printf__print('+', out);
}

void	printf__gest_di(va_list		ap,
			t_printf_param	param,
			t_printf_out	*out)
{
  long	nbr;

  nbr = printf__get_int64_t(ap, param);
  param.prec -= printf__nbrlen(nbr);
  if (param.decal == false || param.decal == unknown)
    printf__before_print_di(nbr, &param, out);
  printf__putnbr(nbr, out);
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}

void		printf__gest_u(va_list		ap,
			t_printf_param	param,
			t_printf_out	*out)
{
  unsigned long	nbr;

  nbr = printf__get_uint64_t(ap, param);
  param.prec -= printf__nbrlen(nbr);
  if (param.decal == false)
    while (param.prec > 0 && param.prec--)
      printf__print(((param.o_aff) ? '0' : ' '), out);
  printf__putnbr_base(nbr, out, "0123456789");
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}
