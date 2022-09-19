#include <stdio.h>
/**
 *main - returns all aplphabets except 'q' and 'e' and a new line
 *
 *Return: void
 */
int main(void)
{
int x ;
for (x = 'a'; x <= 'z'; x++)
{
if ((x == 'e') || (x == 'q'))
{
continue;
}
putchar(x);
}
putchar('\n');
}
