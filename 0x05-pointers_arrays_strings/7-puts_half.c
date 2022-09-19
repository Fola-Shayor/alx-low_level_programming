#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of a string *
 *@str: a variable
 *Return: nothing
 */
void puts_half(char *str)
{
int len;
int i;
int s;
while(*(str + len) != '\0')
{
len++;
}
s = ((len - 1) / 2) + 1;
for (i = s; i < len; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
