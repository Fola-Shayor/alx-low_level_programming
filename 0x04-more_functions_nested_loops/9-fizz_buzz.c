#include <stdio.h>
/**
 *main - prints fizz for multiples of 3 buzz for 5 and fizzbuzzfor 15
 *@x: integer
 *Return: 0
 */
int main(void)
{
  int x;
  for (x = 1; x <= 100; x++)
    {
      if ((x % 3 == 0) && (x % 5 == 0))
	{
	 printf("FizzBuzz");
	}
      else if (x % 5 == 0)
	{
	  printf("Buzz");
	}
      else if ((x % 3 == 0))
	{
	  printf("Fizz")
	    }
      if (x != 100)
	{
	  printf(" ");
	}
    }
  printf('\n');
}
