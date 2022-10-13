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
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
if (separator !=  NULL)
{
printf("%d", va_arg(list, int));
printf("%s", separator);
}
else
{
printf("%d", va_arg(list, int));
}
}
printf("%d", va_arg(list, int));
va_end(list);
putchar('\n');
}
