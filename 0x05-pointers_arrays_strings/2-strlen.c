#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strlen - returns the length of a string
 *@s: a character
 *Return: nothing
 */
int _strlen(const char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return(i);
}
