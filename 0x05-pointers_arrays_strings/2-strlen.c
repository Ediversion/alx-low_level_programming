#include <stdio.h>
/**
 * _strlen - This had better work
 * @str: s
 * Return: okay
 */
size_t _strlen(const char *str)
{
	size_t length= 0;

	while(*str++)
	length++;
	return (length);
}
