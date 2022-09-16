#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *int _islower - checks for lower case letters
 *
 *Return: 1 (success)
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
return (0);
}
