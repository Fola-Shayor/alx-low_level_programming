#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints the numbers 0 to 14 10 times
 */
void more_numbers(void)
{
int x;
for (x = 0; x <= 10; x++)
{
for (x = 0; x <= 14; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
}
