#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints string followed by a new line
 *@separator: a char that separates the strings
 *@n: an integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  char *str;
  unsigned int i;
  va_list list;
  va_start(list, n);
  if (separator == NULL)
    {
      separator = "";
    }
  for (i = 0; i < n; i++)
    {
      str = va_arg(list, char*);
      if (str == NULL)
	str = "(nil)";
      printf("%s", str);
      if (i < n - 1)
      {
      printf("%s", separator);
      }
    }
  printf("\n");
}

   
