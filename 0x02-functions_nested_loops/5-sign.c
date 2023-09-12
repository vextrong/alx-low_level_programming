#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	return (0);
}

