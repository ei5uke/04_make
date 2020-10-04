#include <stdio.h>
#include "euler.h"

int main()
{
    //#1 find the sum of all multiples of 3 or 5 below 1000
    printf("#1: The sum of all the multiples of 3 or 5 below 1000 is: %d\n", sum_three_five(1000));

    //#5 what is the smallest # that is evenly divisible by all #s from 1 to 20
    printf("#5: The smallest # that is evenly divisible by all #s from 1 to 20 is: %ld\n", lcm(20));

    return 0;
}