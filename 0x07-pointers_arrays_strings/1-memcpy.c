#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	while (c < i)
	{
		c++;
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
