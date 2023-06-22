#include "main.h"

/**
 * _isalpha - shows 1 if the input is a
 * another cases shows, 0
 *
 * @c: the character in anscii code
 * Return: 1 for the letter, 0 for the rest
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
