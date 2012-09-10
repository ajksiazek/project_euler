/*
 * Problem 3
 *
 * What is the largest prime factor of the number 600851475143?
 */

#include <stdio.h>

int main ()
{
    long long n = 600851475143;
    long long lp;
    int       i;
    for (i = 1; i < n; ++i) {
        if (!(n%i)) {
            printf ("%d\n", i);
            lp = i;
        }
    }
    printf ("The largest prime of %d is %d\n", n, lp);
    return 0;
}
