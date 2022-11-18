#include "sumn.h"
#include "assert.h"
#include <stdio.h>

int sumn (int n)
{
    /*
     * If statments: hvis n er større end 1
     * udregnes der
     * Hvis n er lig med 1, returner fejl
     */

    if(n >= 1)
        return 2 * n-1 + sumn(n-1);
    else if (n ==1)
        return 1;
    else
    return 0;
}