#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: integer number to be checked
 * return: return 1 for character if true, and 0 is false
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
