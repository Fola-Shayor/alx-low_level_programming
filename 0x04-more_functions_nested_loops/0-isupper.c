#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *main - checks for upper case letters
 *@c: carries the value to be checked
 *Return: 1 (success) 0 otherwise
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
return (0);
}
