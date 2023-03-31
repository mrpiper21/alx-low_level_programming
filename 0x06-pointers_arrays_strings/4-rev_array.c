#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *Return: returns void
 */
void reverse_array(int *a, int n)
{
	int d, c;

	for (d = 0; d < n--; d++)
	{
		c = a[d];
		a[d] = a[n];
		a[n] = c;
	}
}
