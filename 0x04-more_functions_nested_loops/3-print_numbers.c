#include <stdio.h>
#include "main.h"
/**
 *print_numbers - prints numbers 0 - 9 followed by a new line
 *@i: an integer
 *Return: 0 (success)
 */
int print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
