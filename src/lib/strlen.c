/*
** strlen.c for printf in /home/lombar_e/rendu/PSU/PSU_2016_my_printf/src/lib
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Sun Dec 06 15:51:40 2016 Thomas Lombard
** Last update Sun Nov 20 00:30:17 2016 Thomas Lombard
*/

int			my_strlen(const char *str)
{
  register const char	*s;

  s = str;
  while (s && *s)
    s++;
  return (s - str);
}
