#include <stdio.h>
#include "main"
#include <ctype.h>
/**
 *print_sign - checks if n is a sign
 *
 *Return: 1 if n > 0; 0 if n == 0; -1 if n < 0
 */
int print_sign(int n)
{
  if (n > 1)
    {
      printf("+");
      retunr (1);
