#include "main.h"
#include <string.h>
/**
 * _strlen - Returns the length of a string.
 * @s: string.
 * Return: length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
