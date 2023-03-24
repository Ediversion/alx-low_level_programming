#include "main.c"
/**
 * print_line - This had better work
 *@n: n
 * Return: okay
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
