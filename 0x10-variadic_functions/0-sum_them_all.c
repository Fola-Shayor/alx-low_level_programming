#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - summation using variadic functions
 *@sum: an integer
 *@i: an integer
 *@n: a parameter
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int i;
va_list list;
if (n)
{
va_start(list, n);
for (i = 0; i < n; i++)
{
sum += var_arg(list, int);
}
va_end(list);
}
return sum;
}
