#include <stdio.h>
#include "main.h"
/**
 * times_table - Print 9-times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
char numStr[5];
int i = 0;
while (i <= 9)
{
int j=0;
int val;
int k;
while (j <= 9)
{
val = i * j;
sprintf(numStr, "%d", val);
for (k = 0; numStr[k] != '\0'; k++)
_putchar(numStr[k]);
if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar('\t');
}
else
break;
j++;
}
if (i != 9)
_putchar('\n');
else
break;
i++;
}
_putchar('\n');
}
