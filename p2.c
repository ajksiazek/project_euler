/*
 * Problem 2
 *
 * Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 *  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>

int main ()
{
    int next = 2;
    int prev = 1;
    int sum  = 0; 
    int swap;
    while (next < 4000001) {
        if (!(next % 2)) {
            sum += next;
            printf ("%d\n", sum);
        }
        swap = next;
        next += prev;
        prev = swap;
    }
    printf ("The sum of the even values in Fib < 4000000 is %d\n", sum);
    return 0;
}
