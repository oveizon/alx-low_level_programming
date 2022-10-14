#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;
	int u;

	for (t = 0; t < 99; t++)
	{
		for (u = t + 1; u <= 99; u++)
		{
			putchar('0' + t / 10);
			putchar('0' + t % 10);
			putchar(' ');
			putchar('0' + u / 10);
			putchar('0' + u % 10);
			if ((t == 98) && (u == 99))
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
