#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @c: c
 * @v: v
 * Return: Work
 */
char *argstostr(int c, char **v)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (c == 0 || v == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		for (n = 0; v[i][n]; n++)
			l++;
	}
	l += c;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
	for (n = 0; v[i][n]; n++)
	{
		str[r] = v[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
