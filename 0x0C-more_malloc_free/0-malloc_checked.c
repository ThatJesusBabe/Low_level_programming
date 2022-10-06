#include "main.h"

/**
 * malloc_checked - cause normal process
 * termination with a status value of 98
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *mem = malloc(b);
if (mem == 0)
	exit(98);

return (mem);
}
