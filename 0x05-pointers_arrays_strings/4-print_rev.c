#include "main.h"

/**
 * print_rev - function of function
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int i = 0;
int o;

while (*s != '\0')
{
i++;
s++;
}
s--;
for (o = i; o > 0; o--)
{
putchar(*s);
s--;
}
putchar('\n');
}
