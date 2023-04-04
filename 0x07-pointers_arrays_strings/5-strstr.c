#include "main.h"
/**
 * _strstr - Entry point
 * @h: h
 * @n: n
 * Return: okay
 */
char *_strstr(char *h, char *n)
{
	for (; *h != '\0'; h++)
	{
		char *l = h;
		char *p = n;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (h);
	}
	return (0);
}
