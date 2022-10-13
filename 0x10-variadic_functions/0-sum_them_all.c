#include <stdio.h>
#include <stdarg.h>
/**
 */
int sum_them_all(const unsigned int n, ...)
{
  int sum = 0;
  int i;
  va_list list;

  va_start(list, n);
  for (i = 0; i < n; i++)
    {
      sum += var_arg(list, int);
      if (n == 0)
	{
	  return (0);
	}
      var_end(list);
      return sum;
    }
}
