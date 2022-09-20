#include "main.h"

/**
* int_strlen - function that returns the lenght of a string.
* @s: string to check
* Return: integer length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
