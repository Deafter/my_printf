/*
** istype.c for toto in /home/lombar_e/rendu/PSU/PSU_2016_my_printf/src/lib
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Tue Dec 15 09:36:27 2016 Thomas Lombard
** Last update Sun Nov 20 00:35:28 2016 Thomas Lombard
*/

#include "header.h"

/*
** strIsNum : renvoie un true ou false si a est un nombre
*/

int	istype(int c, int flag)
{
  int	ret;

  ret = 0;
  if (flag & I_DIGIT)
    ret += (c >= '0' && c <= '9') ? I_DIGIT : 0;
  if (flag & I_LOWER)
    ret += (c >= 'a' && c <= 'z') ? I_LOWER : 0;
  if (flag & I_UPPER)
    ret += (c >= 'A' && c <= 'Z') ? I_UPPER : 0;
  if (flag & I_PRINT)
    ret += (c >= ' ' && c != 127) ? I_PRINT : 0;
  return (ret);
}
