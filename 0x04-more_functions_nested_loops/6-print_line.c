#include <stdio.h>
#include "main"
/**
 *print_line - draws a straight line in the terminal
 *@n: stores the number of times '_' should be printed
 *@x: an integer
 *Return: void
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
putchar('\n');
}
for (x = 0; x < n; x++)
{
_putchar(95)
}
_putchar('\n');
}
