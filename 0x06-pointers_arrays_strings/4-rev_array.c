#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}

