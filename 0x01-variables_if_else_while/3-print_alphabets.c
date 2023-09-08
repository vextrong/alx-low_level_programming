#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
	{
		putchar(ALPHABET);
	}
	putchar('\n');
	return (0);
}
