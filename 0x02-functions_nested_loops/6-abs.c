#include <stdio.h>
#include "main.h"
/**
 *main - impersonate math abs function
 *@n: an integer
 *Return: 0 
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
printf("%d\n", n);
}
else {
printf("%d\n", n);
}
return (0);
}
