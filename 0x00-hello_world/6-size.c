#include <stdio.h>
/**
 * main - print out function
 * Return: - returns 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %1lu byte(s)\n", sizeof(a));
	printf("size of int: %1lu byte(s)\n", sizeof(b));
	printf("size of long int: %1lu bytes(s)\n", sizeof(c));
	printf("size of long long int: %1lu byte(s)\n", sizeof(d));
	printf("size of float: %1lu byte(s)\n", sizeof(f));
	return (0);
}
