#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 (success)
 */
int main(void)
{
int i;
char a;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
for (a = 'a'; a <= 'f'; i++)
{
putchar(a);
}
putchar('\n');
return (0);
}
