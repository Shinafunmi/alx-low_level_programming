#include "main.h"

/**
 * _memset - entry point
 * @s: pointed destinamtion
 * @b: constant byte
 * @n: byte
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
