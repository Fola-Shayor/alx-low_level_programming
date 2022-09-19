#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strlen - returns the length of a string
 *@s: a character variable
 *Return: nothing
 */
int _strlen(const char *s)
{
return (strlen(s));
}

/**
 *puts2 - prints out every other character starting from the first one
 *@str: a character variable
 *Return: nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
