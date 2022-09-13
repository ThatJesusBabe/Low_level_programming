#include "main.h"
/**
* main - print out _putchar as a message
* Return: 0 (SUCCESS)
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');

	return (0);
}

