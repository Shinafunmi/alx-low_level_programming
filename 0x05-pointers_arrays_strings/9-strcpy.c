#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int j;
for (j = 0; src[j] != '\0'; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
