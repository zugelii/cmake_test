#include <stdio.h>
#include <stdlib.h>
#include "MathFunctions.h"

double power(double base, int exponent)
{
    int result = base;
    int i;

    if (exponent == 0)
    {
        /* code */
        return 1;
    }

    for(i = 1; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
    
}
