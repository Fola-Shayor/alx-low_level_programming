#include <stdio.h>
/**
 *main - prints the number of arguments passed into the program
 *@argc: an integer
 *@argv: an unused string parameter
 *Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
printf("%d\n", argc - 1);
return (0);
}
