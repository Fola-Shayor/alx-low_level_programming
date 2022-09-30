#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argv: a string parameter
 *@argc: an integer parameter
 *Return: 0 success
 *@mul: an integer
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int mul;
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
