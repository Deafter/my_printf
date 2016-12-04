/*
** memset.c for printf in /home/lombar_e/rendu/PSU/PSU_2016_my_printf/src/lib
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Sun Dec 06 15:51:40 2016 Thomas Lombard
** Last update Sun Nov 20 00:29:49 2016 Thomas Lombard
*/

#include <stdint.h>

/*
** void my_memset : met les size premiers octets de ptr à reset
*/

void		my_memset(void *ptr, char reset, int64_t size)
{
  register char	*pt;

  pt = (char*)ptr;
  --size;
  while (size >= 0)
    {
      pt[size] = reset;
      --size;
    }
}
