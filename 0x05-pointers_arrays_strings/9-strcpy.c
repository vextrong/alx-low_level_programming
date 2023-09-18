#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: dest
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		src++;
		dest_ptr++;
	}
	*dest_ptr = '\0';
	return (dest);
}
