#include <stdio.h>
#include "main.h"

/**
 * _strncmp - Compares to string and returns difference
 * between first difference
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: First difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (s1[i] - s2[i]);
}
