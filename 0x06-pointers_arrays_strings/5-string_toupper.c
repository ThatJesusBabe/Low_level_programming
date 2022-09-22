#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase.
 * @s : pointer to input char
 * Return: n
 */

char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
