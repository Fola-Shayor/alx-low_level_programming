#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 *_islower - checks for lower case letters
 *@c: only integer
 *Return: 1 (success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
