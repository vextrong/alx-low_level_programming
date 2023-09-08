#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alfabet;

	for (alfabet = 'z'; alfabet >= 'a'; alfabet--)
	{
		putchar(alfabet);
		putchar('\n');
	}
	return (0);
}
