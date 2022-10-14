#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int unit;
	int tens;
	int hun;

	for (hun = '0'; hun <= '9'; hun++)
	{
		for (tens = (hun + 1); tens <= '9'; tens++)
		{
			for (unit = (tens + 1); unit <= '9'; unit++)
			{
				putchar(hun);
				putchar(tens);
				putchar(unit);
				if (hun != '7' || tens != '8' || unit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
			putchar('\n');
			return (0);
}
