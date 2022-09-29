#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: a parameter
 *Return: last digit
 */
int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
_putchar(n + '0');
return (n);
}
else
n = (-1 * n % 10);
_putchar(n + '0');
return (n);
}
