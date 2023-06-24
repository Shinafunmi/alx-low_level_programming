#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - to print all natural numbers
 * Return: return n!
 * @n: - integer
 */
void print_to_98(int n)
{

if (n < 98)
{
while (n <= 98)
{
printf("%d", n);

if (n != 98)
{
	printf(", ");
}
n++;
}
printf("\n");
}
else if (n > 98)
{
while (n >= 98)
{
	printf("%d", n);

	if (n != 98)
	{
		printf(", ");
	}
	n--;
}
printf("\n");
}
else if (n == 98)
{
printf("%d\n", n);
}

}
