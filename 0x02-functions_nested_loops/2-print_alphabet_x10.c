#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
int x;
int y;
for (x = 0; x <= 9; x++)
{
for (y = 'a'; y <= 'z'; y++)
{
putchar(y);
}
putchar('\n');
}
}