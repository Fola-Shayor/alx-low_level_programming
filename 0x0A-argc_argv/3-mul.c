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
if (argc == 2)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error");
return (1);
}
return (0);
}
