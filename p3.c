/*
 * Problem 3
 *
 * What is the largest prime factor of the number 600,851,475,143?
 */

#include <stdio.h>

int main ()
{
    float x = 600851475143;
    float n = (x/2)+1;
    float lp;
    float i;
    for (i=1; i<n; ++i) {
        if (!(x%i)) {
            printf ("%f\n", i);
            lp = i;
        }
    }
    printf ("The largest prime of %f is %f\n", x, lp);
    return 0;
}
