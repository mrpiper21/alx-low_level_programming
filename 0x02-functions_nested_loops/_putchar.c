#include <unistd.h>
/**
 * _puchar - write the char c to stdout
 * @c: The char to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
