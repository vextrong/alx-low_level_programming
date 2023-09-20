#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{

	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (result);
}
