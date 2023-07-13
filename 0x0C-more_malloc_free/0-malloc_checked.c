#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocate memory using
 * @b: number of bytes to allocate
 * Return: a pointer to be allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
