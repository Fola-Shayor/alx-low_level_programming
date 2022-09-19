#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strcpy - copies a string to the buffer dest
 *@dest: a parameter
 *@src: a parameter
 *Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
int i;
if (*src != '\0')
{
for (i = 0;  *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
}
*(dest + i) = '\0';
return (dest);
}
