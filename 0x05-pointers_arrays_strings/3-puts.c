#include "main.h"
/**
 * _puts - This had better work
 * @str: s
 * Return: okay
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
