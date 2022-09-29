#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints from number n to 98
 *@n: an integer
 */
void print_to_98(int n)
{
  for (n = n; n <= 98; n++)
    {
      _putchar(n + '0');
      _putchar(',');
      _putchar(' ');
    }
  _putchar('\n');
}
