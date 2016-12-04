/*
** my_printf.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 10:46:40 2016 Thomas Lombard
** Last update Sun Nov 20 11:03:57 2016 Thomas Lombard
*/

#include "header.h"

int		my_printf(const char	*format,
			  ...)
{
  t_printf_out	out;
  va_list	ap;

  out.out = e_write;
  out.fd = 1;
  out.wrote = 0;
  out.print_len = -1;
  va_start(ap, format);
  printf__calc(format, ap, &out);
  va_end(ap);
  return(out.wrote);
}

int		my_fprintf(FILE		*fs,
			   const char	*format,
			   ...)
{
  t_printf_out	out;
  va_list	ap;

  out.out = e_fs;
  out.fs = fs;
  out.wrote = 0;
  out.print_len = -1;
  va_start(ap, format);
  printf__calc(format, ap, &out);
  va_end(ap);
  return(out.wrote);
}

int		my_dprintf(int		fd,
			   const char	*format,
			   ...)
{
  t_printf_out	out;
  va_list	ap;

  out.out = e_fd;
  out.fd = fd;
  out.wrote = 0;
  out.print_len = -1;
  va_start(ap, format);
  printf__calc(format, ap, &out);
  va_end(ap);
  return(out.wrote);
}

int		my_sprintf(char	*str,
			   const char	*format,
			   ...)
{
  t_printf_out	out;
  va_list	ap;

  out.out = e_chain;
  out.chain = str;
  out.wrote = 0;
  out.print_len = -1;
  va_start(ap, format);
  printf__calc(format, ap, &out);
  va_end(ap);
  return(out.wrote);
}

int		my_snprintf(char	*str,
			    size_t	size,
			    const char	*format,
			    ...)
{
  t_printf_out	out;
  va_list	ap;

  out.out = e_chain;
  out.chain = str;
  out.wrote = 0;
  out.print_len = size;
  va_start(ap, format);
  printf__calc(format, ap, &out);
  va_end(ap);
  return(out.wrote);
}
