#include <stdio.h>
#include "main.h"

/**
 * rot13 -  Encodes a string using rot13.
 *
 * @s: String to encode with ROT13
 *
 * Return: String encoded in ROT13
 */

char *rot13(char *str)
{
	char *enc = str;
	int i = 0;

	while (enc[i] != '\0')
	{
		if ((enc[i] >= 'a' && enc[i] <= 'm') || (enc[i] >= 'A' && enc[i] <= 'M'))
			enc[i] += 13;
		else if ((enc[i] >= 'n' && enc[i] <= 'z') || (enc[i] >= 'N' && enc[i] <= 'Z'))
			enc[i] -= 13;

		i++;
	}
	
	i++;

	return (enc);
}
