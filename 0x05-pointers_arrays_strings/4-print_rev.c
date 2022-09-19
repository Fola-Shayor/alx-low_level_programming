#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_rev - prints the reverse of a string to the stdout
 *@s:a character
 *Return: nothing
 */
void print_rev(char *s)
{
printf("%s\n", strrev(*s));
}
