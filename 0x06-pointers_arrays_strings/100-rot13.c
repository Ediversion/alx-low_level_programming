#include "main.h"
#include <stdio.h>
/**
 * rot13 - This had better work
 * @s: s
 * Return: okay
 */
char *rot13(char *s)
{
	int i, j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (s[i] == d1[j])
	{
	s[i] = d2[j];
	break;
	}
	}
	}
	return (s);
}
