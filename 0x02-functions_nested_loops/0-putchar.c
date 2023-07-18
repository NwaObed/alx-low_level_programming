#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char test[] = "_putchar";
    int i;
    for (i = 0; test[i] != '\0'; i++)
    _putchar(test[i]);
    _putchar('\n');
    return (0);
}