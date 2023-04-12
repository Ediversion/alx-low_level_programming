#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - grid
 * @g: g
 * @h: h
 * Return: work please
 */
void free_grid(int **g, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(g[i]);
	}
	free(g);
}
