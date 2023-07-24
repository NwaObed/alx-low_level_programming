#include "main.h"
/** 
 * swap_int - Function that swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int var1, var2;
	var1 = *a;
	var2 = *b;
	*a = var2;
	*b = var1;
}

