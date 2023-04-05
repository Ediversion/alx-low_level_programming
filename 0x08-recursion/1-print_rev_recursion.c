#include "main.h"
/**
 * _print_rev_recursion - This had better work
 * @x: x
 */
void _print_rev_recursion(char *x)
{
	if (*x)
	{
	_print_rev_recursion(x + 1);
	_putchar(*x);
	}
}
