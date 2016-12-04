/*
** maths.c for printf in /home/lombar_e/rendu/PSU/PSU_2016_my_printf/src/lib
**
** Made by Thomas Lombard
** Login   <lombar_e@epitech.net>
**
** Started on  Sun Dec 06 15:51:40 2016 Thomas Lombard
** Last update Sun Nov 20 00:29:43 2016 Thomas Lombard
*/

int	m_pow(int nb, int power)
{
  return ((power < 0) ? 0 : \
	  (power > 1) ? nb * m_pow(nb, power - 1) : \
	  (power == 1) ? nb : 1);
}

int	m_abs(int val)
{
  if (val < 0)
    return (val * -1);
  return (val);
}
