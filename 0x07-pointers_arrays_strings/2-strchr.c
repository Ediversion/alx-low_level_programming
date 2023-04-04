#include <stdio.h>
#include "main.h"
/**
 * _strchr - This had better work
 * @x: x
 * @y: y
 * Return: okay
 */
char *_strchr(char *x, char y)
{
	int i;

	for (i = 0; x[i] >= '\0'; i++)
	{
	if (x[i] == y)
	return (x + i);
	}
	return (NULL);
}
