#include <stdio.h>
#include "main.h"
/**
 * mul - multiples teo integers
 * @a: First interger
 * @b: Second integer
 * Return: val of the multiplication.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
int val;
val = a * b;
return (val);
}
