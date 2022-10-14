#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alf = 'a';

	while (alf <= 'z')
	{
		if ((alf != 'e') && (alf != 'q'))
		{
			putchar(alf);
		}
		alf++;
	}
	putchar('\n');
	return (0);
}
