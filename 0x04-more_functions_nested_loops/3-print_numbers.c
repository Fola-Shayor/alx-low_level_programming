#include <stdio.h>
#include "main.h"
/**
 *print_numbers - prints numbers 0 - 9 followed by a new line
 *@x: an integer
 *Return: 0 (success)
 */
int print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x);
}
_putchar('\n');
}
