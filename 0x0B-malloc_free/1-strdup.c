#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - work
* @s: s
* Return: 0
*/

char *_strdup(char *s)
{
char *a;
int i, r = 0;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (r = 0; s[r]; r++)
		a[r] = s[r];
	return (a);
}
