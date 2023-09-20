#include <stdio.h>
#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @str: string
 * Return: encoded string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_chars = "433771";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j / 2];
				break;
			}
		}
	}
	return (str);
}

