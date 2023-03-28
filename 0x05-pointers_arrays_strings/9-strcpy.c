#include "main.h"
/**
 * _strcpy - This had better work
 * @d : d
 * @s : s
 * Return: okay
 */
char *_strcpy(char *d, char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
d[i] = s[i];
}
d[i++] = '\0';
return (d);
}
