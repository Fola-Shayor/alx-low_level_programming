#include <stdio.h>
#include "main.h"
/**
 *_abs - impersonate math abs function
 *@n: an integer
 *Return: nothing
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
printf("%d\n", n);
}
else
{
printf("%d\n", n);
}
}
