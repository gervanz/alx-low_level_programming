#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String parameter
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char clip;

	while (*(s + i) != '\0')
		i++;
	i -= 1;

	while (len < i)
	{
		clip = s[i];
		s[i] = s[len];
		s[len] = clip;
		len++;
		i--;
	}
}
