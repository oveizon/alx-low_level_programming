#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	i--;
	for (a = 0; a <= i; i--)
		_putchar(s[i]);
	_putchar('\n');
}
