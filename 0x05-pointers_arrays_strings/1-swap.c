#include "main.h"
/**
 * swap_int - swaps the values of int a and int b
 * @a: first int to swap
 * @n: pointer to int n
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
