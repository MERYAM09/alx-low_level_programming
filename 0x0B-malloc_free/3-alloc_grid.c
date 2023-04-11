#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: A pointer to two dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, x;
	int area = width * height;

	if (area <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			x = i - 1;
			while (x >= 0)
			{
				free(arr[x]);
				x--;
			}
			free(arr);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		x = 0;
		while (x < width)
		{
			arr[i][x] = 0;
			x++;
		}
		i++;
	}

	return (arr);
}
