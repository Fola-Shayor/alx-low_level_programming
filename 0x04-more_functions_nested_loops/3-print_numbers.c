#include <stdio.h>
#include "main.h"
/**
 *print_numbers - prints numbers 0 - 9 followed by a new line
 *@x: an integer
 */
void print_numbers(int x)
{
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
