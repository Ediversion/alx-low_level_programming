#include "main.h"
/**
 * _strncpy - This had better work
 * @d: d
 * @s: s
 * @n: n
 * Return: okay
 */
char *_strncpy(char *d, char *s, int n)
{
	int index = 0, sl = 0;

	while (s[index++])
	sl++;

	for (index = 0; s[index] && index < n; index++)
	d[index] = s[index];

	for (index = sl; index < n; index++)
	d[index] = '\0';

	return (d);
}
