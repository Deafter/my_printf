/*
** my_printf.c for printf in /home/lombar_e/PSU/PSU_2016_my_printf/src
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Fri Nov 18 10:46:40 2016 Thomas Lombard
** Last update Sun Nov 20 11:58:28 2016 Thomas Lombard
*/

#include "header.h"

int		my_vprintf(const char	*format,
			  va_list	ap)
{
  t_printf_out	out;

  out.out = e_write;
  out.fd = 1;
  out.wrote = 0;
  out.print_len = -1;
  printf__calc(format, ap, &out);
  return(out.wrote);
}

int		my_vfprintf(FILE		*fs,
			   const char	*format,
			   va_list	ap)
{
  t_printf_out	out;

  out.out = e_fs;
  out.fs = fs;
  out.wrote = 0;
  out.print_len = -1;
  printf__calc(format, ap, &out);
  return(out.wrote);
}

int		my_vdprintf(int		fd,
			   const char	*format,
			   va_list	ap)
{
  t_printf_out	out;

  out.out = e_fd;
  out.fd = fd;
  out.wrote = 0;
  out.print_len = -1;
  printf__calc(format, ap, &out);
  return(out.wrote);
}

int		my_vsprintf(char	*str,
			   const char	*format,
			   va_list	ap)
{
  t_printf_out	out;

  out.out = e_chain;
  out.chain = str;
  out.wrote = 0;
  out.print_len = -1;
  printf__calc(format, ap, &out);
  return(out.wrote);
}

int		my_vsnprintf(char	*str,
			    size_t	size,
			    const char	*format,
			    va_list	ap)
{
  t_printf_out	out;

  out.out = e_chain;
  out.chain = str;
  out.wrote = 0;
  out.print_len = size;
  printf__calc(format, ap, &out);
  return(out.wrote);
}
