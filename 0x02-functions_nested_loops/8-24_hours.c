#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Print every min of Jack Bauer day
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hr = 24;
int minute = 60;
int i = 0;
char hrStr[5];
char minStr[5];
while (i < hr)
{
int j = 0;
int k;
sprintf(hrStr, "%d", i);
while (j < minute)
{

sprintf(minStr, "%d", j);
if ((i < 10) & (j < 10))
{
_putchar('0');
_putchar(hrStr[0]);
_putchar(':');
_putchar('0');
_putchar(minStr[0]);
}
else if ((i < 10) & (j >= 10))
{
_putchar('0');
_putchar(hrStr[0]);
_putchar(':');
for (k = 0; minStr[k] != '\0'; k++)
_putchar(minStr[k]);
}
else if ((i >= 10) & (j < 10))
{
for (k = 0; hrStr[k] != '\0'; k++)
_putchar(hrStr[k]);
_putchar(':');
_putchar('0');
_putchar(minStr[0]);
}
else
{
for (k = 0; hrStr[k] != '\0'; k++)
_putchar(hrStr[k]);
_putchar(':');
for (k = 0; minStr[k] != '\0'; k++)
_putchar(minStr[k]);
}
j++;
_putchar('\n');
}
i++;   
}
}
