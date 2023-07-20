#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks checks a digit 0-9
 * @c: The number to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
if isdigit(c)
return (1);
else
return (0);
}
