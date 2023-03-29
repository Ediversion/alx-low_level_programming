#include "main.h"
#include <stdio.h>
/**
 * _strncat - This had better work
 * @d: d
 * @n: n
 * @s: s
 *
 * Return: okay
 */
char *_strncat(char *d, char *s, int n)
{
	int index = 0, dl = 0;

	while (d[index++])
	dl++;
	for (index = 0; s[index] && index < n; index++)
	d[dl++] = s[index];
	return (d);
}
