#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 * Return: reversed string
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\0');
}
