#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: parameter
 * @s2: parameter
 * Return: s1, s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[1] != '\0' && s2[2] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
