#include <stdio.h>
#include "main.h"
/**
 *_puts - prints a string followed by a new line to the standard output
 *@str: a variable
 *Return: nothing
 */
void _puts(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
