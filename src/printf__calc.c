/*
** printf__calc.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 10:54:55 2016 Thomas Lombard
** Last update Fri Nov 18 19:37:01 2016 Thomas Lombard
*/

#include "header.h"

int			printf__calc(UNUSED const char		*format,
				     UNUSED va_list		ap,
				     UNUSED t_printf_out	*out)
{
  char			*tmp;

  while (format && *format)
    {
      if (*format == '%')
	{
	  tmp = (char *)format + 1;
	  if (printf__parse(&tmp, ap, out))
	    format = tmp;
	  else
	    printf__print(*format, out);
	}
      else
	printf__print(*format, out);
      format++;
    }
  return (out->wrote);
}
