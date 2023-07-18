#include <stdio.h>
#include <ctype.h>

#include "main.h"

int _isalpha(int c)
{
    if (isalpha(c) || islower(c) || isupper(c))
        return (1);
    else
        return (0);
}