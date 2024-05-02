#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        int b;

            srand(time(0));
                n = rand() - RAND_MAX / 2;
                b = n % 10;

        if ( n > 0)
        {
            printf("if the last digit of %d and it is positive,the value is %d\n", n,b);
        }
        else if (n == 0)
        {
            printf("if the last digit of %d,given the number is zerp,the value is %d\n", n,b);
        }
        else
        {
            printf("if the last digit of %d with the number being negative,the value is %d\n",n,b);
        }
        return (0);
}

