/*
** printf_constructor.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 11:09:47 2016 Thomas Lombard
** Last update Sat Nov 19 20:29:19 2016 Thomas Lombard
*/

#include "header.h"

static void	printf__set_flag(t_printf_func	*fnc,
				 char		flag,
				 void		p(va_list,
						  t_printf_param,
						  t_printf_out*))
{
  fnc->flag = flag;
  fnc->ptr = p;
}


void	printf__construct(t_printf_func	*func)
{
  printf__set_flag(&func[ 0], 'd', printf__gest_di);
  printf__set_flag(&func[ 1], 'i', printf__gest_di);
  printf__set_flag(&func[ 2], 'u', printf__gest_u);
  printf__set_flag(&func[ 3], 'b', printf__gest_b);
  printf__set_flag(&func[ 4], 'o', printf__gest_o);
  printf__set_flag(&func[ 5], 'x', printf__gest_x);
  printf__set_flag(&func[ 6], 'X', printf__gest_X);
  printf__set_flag(&func[ 7], 'f', printf__gest_f);
  printf__set_flag(&func[ 8], 'F', printf__gest_f);
  printf__set_flag(&func[ 9], 'c', printf__gest_c);
  printf__set_flag(&func[10], 's', printf__gest_s);
  printf__set_flag(&func[11], 'S', printf__gest_S);
  printf__set_flag(&func[12], '%', printf__gest_mod);
  printf__set_flag(&func[13], 'n', printf__gest_n);
  printf__set_flag(&func[14], 'p', printf__gest_p);
}
