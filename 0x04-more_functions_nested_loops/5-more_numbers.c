#include "main.h"
/**
 *more_numbers : print numbers 0 - 14, 10 times
 */
void more_numbers(void)
{
  int i;
  int j;
  int k;
  i = 0;
  while (i < 10)
    {
      for (j = 48; j <= 57, j++)
	{
	  _putchar(j);
	  if (j == 57)
	    {
	      for (k = 48; k <= 52; k++)
		{
		  _putchar(49 + k);
		}
	    }
	}
      _putchar('\n');
      i++;
    }
}
