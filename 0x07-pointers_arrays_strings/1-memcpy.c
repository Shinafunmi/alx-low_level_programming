#include "main.h"

/**
 * _memcpy - function that copies memory areas
 * @dest: input
 * @src: input
 * @n: input
 * Return: always 0 success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
