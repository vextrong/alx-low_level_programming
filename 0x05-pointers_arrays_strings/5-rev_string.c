#include <stdio.h>
#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char c;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = c;
	}
}
