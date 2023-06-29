#include "main.h"

/**
 * _strncpy - funtion that copies the string
 * @dest: param
 * @src: param
 * @n: param
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
