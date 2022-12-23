#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: String to be concatenated
 * @src: String to concatenate
 *
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *new = dest;
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		new[len] = src[i];
		len++;
	}

	new[len] = '\0';

	return (new);

}
