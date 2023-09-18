#include <stdio.h>
#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string
 * Return: half of string
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int firsthalf;

	while (str[length] != '\0')
	{
		length++;
	}
	firsthalf = (length - 1) / 2 + 1;

	for (i = firsthalf; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
