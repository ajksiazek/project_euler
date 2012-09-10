/*
 * Project Euler problem 1
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int main ()
{
    int sum = 0;
    int i;
    for (i=1; i<1000; ++i) {
        if (!(i%3) || !(i%5)) {
            sum+=i;
            printf ("%d\n", sum);
        }
    }
    printf ("The sum of multiples of 3 or 5 below 1000 is %d\n", sum);
    return 0;
}
