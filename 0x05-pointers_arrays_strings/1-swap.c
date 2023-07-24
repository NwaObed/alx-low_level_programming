#include "main.h"
/** swap_int - Function that swaps the value of two integers
 * @a (pointer) : first pointer
 * @b (pointer) : second pointer
 */
void swap_int(int *a, int *b)
{
	int var1, var2;
	/* Before swap */
	var1 = *a;
	var2 = *b;
	/* swap the values */
	*a = var2;
	*b = var1;
}

