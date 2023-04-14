#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - This had better work
 * @b: b
 * Return: okay
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
