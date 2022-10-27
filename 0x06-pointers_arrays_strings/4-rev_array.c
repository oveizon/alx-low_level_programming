#include "main"
/**
 * reverse_array - reversing function.
 * @a: pointer
 * @n: pointer
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1; /* omit null terminator in length */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
