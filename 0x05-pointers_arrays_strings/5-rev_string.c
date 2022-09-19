#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the used string to beb reversed
 * Return: zero
 */

void rev_string(char *s)
{
        int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		i = 0;
		half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
