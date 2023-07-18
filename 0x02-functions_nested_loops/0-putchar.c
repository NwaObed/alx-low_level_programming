#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char test[] = "_putchar\n";
int i;
for (i = 0; test[i] != '\0'; i++)
{
_putchar(test[i]);
}
return (0);
}