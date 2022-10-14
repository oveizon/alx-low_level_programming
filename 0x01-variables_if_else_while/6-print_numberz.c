#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums = '0';

	while (nums < '10')
	{
		putchar(nums);
		nums++;
	}
	putchar('\n');
	return (0);
}
