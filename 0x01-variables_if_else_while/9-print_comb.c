#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numm++;
	}
	putchar('\n');
	return (0);
}