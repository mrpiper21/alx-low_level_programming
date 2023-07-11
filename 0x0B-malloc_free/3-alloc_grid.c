#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **malc;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	malc = malloc(sizeof(int *) * height);

	if (malc == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		malc[x] = malloc(sizeof(int) * width);

		if (malc[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(malc[x]);
			}
			free(malc);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			malc[x][y] = 0;
	}

	return (malc);
}
