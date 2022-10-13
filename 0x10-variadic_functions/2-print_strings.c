#include <stdio.h>
#include <stdarg.h>
/**
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  char *str;
  unsigned int i;
  va_list list;
  va_start(list, n);
  if (separator == NULL)
    {
      str = "(nil)";
    }
  printf("%s", str);
  if (i < n - 1)
    {
      printf("%s", separator);
    }
  printf("\n");
}

   
