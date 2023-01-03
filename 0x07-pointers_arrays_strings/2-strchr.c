#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates character in a string
 *
 * @s: String to be searched
 * @c: Character to be matched
 *
 * Return: First occurence if contained, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	return (NULL);
}
