#include <stdio.h>
#include "main.h"
/**
 *main - prints fizz for multiples of 3 buzz for 5 and fizzbuzzfor 15
 *
 *Return: 
 */
int main(void)
{
  int x;
  for (x = 1; x <= 100; x++)
    {
      if (x % 3 == 0 )
	{
	 _putchar("Fizz");
	}
      else if (x % 5 == 0)
	{
	  _putchar("Buzz");
	}
      else if ((x % 3 == 0 ) && (x % 5 == 0))
	{
	  _putchar("FizzBuzz")
	    }
      _putchar('\n');
    }
}