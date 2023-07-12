#include <stdio.h>
#include "main.h"
/**
 * main - A function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int c = 0;

	for (; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	return (0);
}
