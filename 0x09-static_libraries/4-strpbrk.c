#include "main.h"
/**
 * _strpbrk - function
 * @s : pointer to check if the value is inside
 * @accept : the value to check
 * Return: memory.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
}
