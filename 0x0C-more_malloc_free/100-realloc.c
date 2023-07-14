#include <stdlib.h>
#include "main.h"

/**
 * _realloc - releases a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size of the allocated mem
 * @new_size: new size of the memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if(new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
ptr1[i] = old_ptr[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = old_ptr[i];
}
free(ptr);
return (ptr1);
}
