#include "main.h"
#ifndef _ABS_H
#define _ABS_H
#define ABS(x)
/**
 *main - imitates the math function abs
 *@x: an integer
 *Return: absolute value of x
 */
int main()
{
#ifdef (x > 0)
  {
    _putchar(x);
  }
  #else
  {
    x = -1 * x;
  _putchar(x);
}
#endif
