#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_isdigit - checks of c is a digit between 0 and 9
 *@c: a variable containing the value to be checked
 *Return: 1 if c contains a digit. 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
return (0);
}
