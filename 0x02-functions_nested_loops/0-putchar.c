#include "main.h"
int main(void)
/**
 * Program to print char at a time
 * 
 * Return 0
 */
{
char test[] = "_putchar\n";
int i;
for (i = 0; test[i] != '\0'; i++)
{
_putchar(test[i]);
}
return (0);
}

