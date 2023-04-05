#include "main.h"
/**
 * _puts_recursion - This had better work
 * @x: x
 * Return: okay
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
	_putchar(*x);
	_puts_recursion(x + 1);
	}
	else
	_putchar('\n');
}
