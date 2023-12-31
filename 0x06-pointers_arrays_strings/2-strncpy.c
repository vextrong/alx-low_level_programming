#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (result);
}
