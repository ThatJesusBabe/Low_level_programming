#include "main.h"
/**
* print_alphabet - print alphabeth.
* Return: Always 0.
*/

void print_alphabet(void);

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
