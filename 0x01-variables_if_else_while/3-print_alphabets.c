#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
char c;
char b;
c = 'a';
b = 'A';
while (c <= 'z')
{
putchar(c);

c++;
}
while (b <= 'Z')
{
putchar(b);

b++;
}
putchar('\n');
return (0);
}
