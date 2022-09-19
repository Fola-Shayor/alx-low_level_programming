#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *print_sign - checks if n is a sign
 *@n: an integer
 *Return: 1 if n > 0; 0 if n == 0; -1 if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else if (n < 0)
{
printf("-");
return (-1);
}
return (0);
}
