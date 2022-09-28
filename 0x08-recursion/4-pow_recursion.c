#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 *_pow_recursion - imtates the math power function
 *@x: an integer
 *@y: an =other integer
 *Return: x^y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (1);
}
return (x * _pow_recursion(x , y - 1);
}
