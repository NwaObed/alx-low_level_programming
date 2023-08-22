#include "main.h"
#include <stdio.h>
/**
 *more_numbers : print numbers 0 - 14, 10 times
*/
void more_numbers(void)
{
  int i;
  i = 0;
  while (i < 10)
  {
    for (i = 0; i <= 14; i++) {
        _putchar('0' + i);
        if (i >= 10)
        {
          _putchar('0' + 1);
        }    
    }
    putchar('\n'); 
    i++;
  }
}
