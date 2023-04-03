#include "main.h"
/**
 * _memcpy - This had better work
 * @d: d
 * @s: s
 * @n: n
 * Return: okay
 */
char *_memcpy(char *d, char *s, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		d[j] = s[j];

	return (d);
}
