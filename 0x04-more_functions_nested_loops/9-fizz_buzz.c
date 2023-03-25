#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers from 1 to 100
 * but print Fizz insteads of the number when it encounts
 * multiples of 3 and Buzz at multiples of 5
 * and FizzBuzz when encounters multiples of 3 and 5
 * Returns: Always 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}

