#include <stdio.h>
/**
 * main - print out the function
 * Return: returns the sring "STATEMENT"
 * Return(void): Return and displays the return value
 */
const char Return(void)
{
	char Value[9] = "STATEMENT";
	return (Value);
}
int main(void)
{
	int n;
	printf("Enter a number: \n");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
	{
		printf("%d is negative", n);
	}
	printf("%s", Return());
}
