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
int i, mul = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
printf("%d\n", mul);
}
return (0);
}
}
