#include "main.h"

/**
* print_array - function that prints half of a string
* @n: elements parameter input
* @a: string parameter input
* Description: Numbers must be separated by comma and space.
* Return: zero
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
