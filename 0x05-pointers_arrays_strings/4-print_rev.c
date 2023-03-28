#include <stdio.h>
#include "main.h"
/**
 * print_rev - This had better work
 * @s: s
 * Return: okay
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
