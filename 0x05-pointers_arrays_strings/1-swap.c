#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps the values of a and b
 *@a: first integer to be swapped
 *@b: second integer to be swapped
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
