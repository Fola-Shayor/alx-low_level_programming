#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers - prints numbers from 0 to 9 except 3 and 4
 *@x: variable used to store values for looping
 */
void print_most_numbers(int x)
{
for (x = 0; x <= 9; x++)
{
if ((x != 2 && x != 4))
_putchar(x + '0');
}
_putchar('\n');
}
