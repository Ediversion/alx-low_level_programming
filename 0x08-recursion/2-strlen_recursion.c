#include "main.h"
/**
 * _strlen_recursion - This had better work
 * @x: x
 * Return: okay
 */
int _strlen_recursion(char *x)
{
	int l = 0;

	if (*x)
	{
	l++;
	l += _strlen_recursion(x + 1);
	}
	return (l);
}
