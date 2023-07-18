#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - Checks alphabetic characters
 * @c: The character to check
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c) || islower(c) || isupper(c))
return (1);
else
return (0);
}