#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = '0'; x < '9'; x++)
{
putchar(x);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('/');
return (0);
}
