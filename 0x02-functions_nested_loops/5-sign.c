#include "main.h"
/**
 * print_sign - determines the input number
 * greater equals or less than
 * @n: the input number as an integer
 * Return: 1 is greater than zero, 0 is zero
 * -1 is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
