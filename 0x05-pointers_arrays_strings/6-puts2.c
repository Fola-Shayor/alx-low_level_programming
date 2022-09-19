#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts2 - prints out every other character starting from the first one
 *@str: a character variable
 *Return: nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; i < strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
