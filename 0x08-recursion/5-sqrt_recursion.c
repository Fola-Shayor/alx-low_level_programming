#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 *_sqrt_recursion - return the square root of  number
 *@n: an integer
 *Return: -1 (invalid)
 */
int _sqrt_recursion(int n)
{
  if (n <= 0)
    {
      return (-1);
    }
  else if ( n == 1)
    {
      return (1);
    }
  return (1/2 * _sqrt_recursion(n - 1));
