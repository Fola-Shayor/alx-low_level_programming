#include <stdio.h>
#include "main.h"
/**
 *main - calls a function
 *
 *Return: Always 0
 */
void print_alphabet(void) {
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
int main(void)
{
print_alphabet();
return (0);
}

