#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * len - find length of string
 * @str: string
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

/**
 * strcpy - copies the string pointed to by src,
 *
 * including the terminating null byte (\0),
 *
 * to the buffer pointed to by dest
 *
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * 
