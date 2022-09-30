#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argv: a string parameter
 *@argc: an integer parameter
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int i, mul;
mul = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else if (argc == 2)
{
for (i = 1; i < argc; i++)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
}
