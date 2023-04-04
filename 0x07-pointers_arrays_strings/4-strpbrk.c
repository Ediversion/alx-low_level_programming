#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: s
 * @a: a
 * Return: okay
 */
char *_strpbrk(char *s, char *a)
{
	int k;

	while (*s)
	{
		for (k = 0; a[k]; k++)
		{
		if (*s == a[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
