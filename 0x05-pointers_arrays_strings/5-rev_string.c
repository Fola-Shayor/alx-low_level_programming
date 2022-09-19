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
 *rev_string - prints the reverse of a string to the stdout
 *@s:a character
 *Return: nothing
 */
void rev_string(char *s)
{
int i;
int len;
len = _strlen(s);
for (i = (len - 1); i >= 0; i--)
{
_putchar(*(s + i));
}
}
