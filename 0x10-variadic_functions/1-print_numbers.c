#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers and separator
 *@separator: a char
 *@n: an int;
 *@i: an int;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list list;
va_start(list, n);
if (*seperator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
printf("%c", *separator);
}
}
va_end(list);
putchar('\n');
}
