#include <stdio.h>
#include "main.h"

void print_mult_3_or_5(void)
{
  int i;
  int sum = 0;
  for (i = 0; i < 1024; i++)
    {
      if ((i % 3 == 0) || (i % 5 == 0))
	sum += i;
    }
}
