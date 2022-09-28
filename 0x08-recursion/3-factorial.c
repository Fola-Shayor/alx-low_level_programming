#include <stdio.h>
#include "main.h"
/**
 *factorial - imitiates the mathematical concept of factorials
 *@n: an integer
 *Return: -1 (error)
 */
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
