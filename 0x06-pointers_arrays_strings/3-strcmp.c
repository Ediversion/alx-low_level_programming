#include "main.h"
/**
 * _strcmp - This had better work
 * @s1: s1
 * @s2: s2
 * Return: okay
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
