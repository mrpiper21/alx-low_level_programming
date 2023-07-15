#include <stdlib.h> 
#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: number of bytes to allocates
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
