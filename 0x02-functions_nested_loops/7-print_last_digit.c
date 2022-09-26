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
printf("%d", n);
return (n);
}
else
n = (-n % 10);
printf("%d", n);
return (n);
