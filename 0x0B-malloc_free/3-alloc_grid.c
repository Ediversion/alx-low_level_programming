#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - work
 * @w: w
 * @h: h
 * Return: must work
 */
int **alloc_grid(int w, int h)
{
	int **me;
	int x, y;

	if (w <= 0 || h <= 0)
		return (NULL);

	me = malloc(sizeof(int *) * h);

	if (me == NULL)
		return (NULL);

	for (x = 0; x < h; x++)
	{
		me[x] = malloc(sizeof(int) * w);
		if (me[x] == NULL)
		{
			for (; x >= 0; x--)
				free(me[x]);
			free(me);
			return (NULL);
		}
	}
	for (x = 0; x < h; x++)
	{
		for (y = 0; y < w; y++)
			me[x][y] = 0;
	}
	return (me);
}
