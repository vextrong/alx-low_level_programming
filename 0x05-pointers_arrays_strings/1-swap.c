#include <stdio.h>
#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: values
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
