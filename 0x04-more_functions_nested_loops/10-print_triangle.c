#include "main.h"
/**
 * print_triangle - This had better work
 *@s: s
 * Return: okay
 */

void print_triangle(int s)
{
	int x, y, z;

	if (s <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < s; x++)
	{
	for (y = s - x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
