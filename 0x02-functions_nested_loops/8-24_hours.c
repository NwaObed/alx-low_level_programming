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
while (i < hr)
{
int j = 0;
while (j < minute)
{
if ((i < 10) & (j < 10))
printf("0%d:%d0", i, j);
else if ((i < 10) & (j >= 10))
printf("0%d:%d", i, j);
else if ((i >= 10) & (j < 10))
printf("%d:0%d", i, j);
else
printf("%d:%d", i, j);
j++;
_putchar('\n');
}
i++;   
}
}
