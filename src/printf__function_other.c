/*
** printf__function_other.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Sat Nov 19 15:11:09 2016 Thomas Lombard
** Last update Sun Dec 04 23:48:08 2016 Thomas Lombard
*/

#include "header.h"

void	printf__gest_mod(UNUSED va_list		ap,
			 UNUSED t_printf_param	param,
			 t_printf_out		*out)
{
  printf__print('%', out);
}

void	printf__gest_n(UNUSED va_list		ap,
		       UNUSED t_printf_param	param,
		       t_printf_out		*out)
{
  unsigned long	nbr;

  nbr = printf__get_uint64_t(ap, param);
  param.prec -= printf__nbrlen(nbr);
  if (param.decal == false || param.decal == unknown)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(((param.o_aff) ? '0' : ' '), out);
    }
  printf__putnbr_base(nbr, out, "0123456789");
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}

void	printf__gest_p(va_list		ap,
		       t_printf_param	param,
		       t_printf_out	*out)
{
  unsigned long	nbr;

  nbr = (unsigned long)va_arg(ap, void *);
  if (nbr == 0)
    {
      printf__putstr("(nil)", -1, out);
      return ;
    }
  param.prec -= 2;
  param.prec -= printf__nbrlen_base(nbr, 16);
  if (param.decal == false || param.decal == unknown)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(((param.o_aff) ? '0' : ' '), out);
    }
  printf__putstr("0x", -1, out);
  printf__putnbr_base(nbr, out, "0123456789abcdef");
  if (param.decal == true)
    {
      while (param.prec > 0 && param.prec--)
	printf__print(' ', out);
    }
}
