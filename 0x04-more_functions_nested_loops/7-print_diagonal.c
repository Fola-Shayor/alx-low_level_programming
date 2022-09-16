#include <stdio.h>
#include "main"
/**
 *print_diagonal - prints forward slashes n number of times
 *@n: stores the number of times '\' will be printed
 *@x: an integer
 *Return: void
 */
void print_diagonal(int n)
{
int x;
for ( x = 0; x < n; x++)
{
putchar(92);
}
_putchar('\n');
}
