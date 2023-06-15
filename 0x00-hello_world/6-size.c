#include <stdio.h>
/**
 * main - print out function
 * Return: - returns 0
 */
int main(void)
{
	printf("size of char: %1lu byte(s)\n", sizeof(char));
	printf("size of int: %1lu byte(s)\n", sizeof(int));
	printf("size of long int: %1lu bytes(s)\n", sizeof(long int));
	printf("size of long long int: %1lu byte(s)\n", sizeof(long long int));
	printf("size of float: %1lu byte(s)\n", sizeof(float));
	return (0);
}
