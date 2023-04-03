#include "main.h"

/**
 * _memset - This had better work
 * @x: x
 * @y: y
 * @z: z
 * Return: okay
 */
char *_memset(char *x, char y, unsigned int z)
{
	unsigned int j;

	for (j = 0; j < z; j++)
		x[j] = y;
	return (x);
}
