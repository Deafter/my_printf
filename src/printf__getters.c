/*
** printf__getters.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 20:03:54 2016 Thomas Lombard
** Last update Fri Nov 18 20:08:47 2016 Thomas Lombard
*/

#include "header.h"

long	printf__get_int64_t(va_list		ap,
			    t_printf_param	param)
{
  long	ret;

  if (param.conv == PRINTF_CONV_L)
    ret = va_arg(ap, long);
#ifdef __LONG_LONG_OK
  else if (param.conv == PRINTF_CONV_LL)
    ret = (long) va_arg(ap, long long);
#endif /* !__LONG_LONG_OK */
  else if (param.conv == PRINTF_CONV_H)
    ret = (long) va_arg(ap, int);
  else if (param.conv == PRINTF_CONV_HH)
    ret = (long) va_arg(ap, int);
  else
    ret = (long) va_arg(ap, int);
  return (ret);
}

unsigned long	printf__get_uint64_t(va_list		ap,
				    t_printf_param	param)
{
  unsigned long	ret;

  if (param.conv == PRINTF_CONV_L)
    ret = va_arg(ap, unsigned long);
#ifdef __LONG_LONG_OK
  else if (param.conv == PRINTF_CONV_LL)
    ret = (unsigned long) va_arg(ap, unsigned long long);
#endif /* !__LONG_LONG_OK */
  else if (param.conv == PRINTF_CONV_H)
    ret = (unsigned long) va_arg(ap, unsigned int);
  else if (param.conv == PRINTF_CONV_HH)
    ret = (unsigned long) va_arg(ap, unsigned int);
  else
    ret = (unsigned long) va_arg(ap, unsigned int);
  return (ret);
}
