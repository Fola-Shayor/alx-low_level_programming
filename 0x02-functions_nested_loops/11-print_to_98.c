#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints from number n to 98
 *@n: an integer
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
else
{
for (n = n; n <=98; n--)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
