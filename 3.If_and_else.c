#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        int b;

            srand(time(0));
            n = rand() - RAND_MAX / 2;
            /* your code goes there */
            b = n % 10;

            if (b > 0)
            {
                printf("%d,The number is greater than zero\n",b);
            } 
            else if (b ==0)
            {
                printf("%d,The number is zero\n",b);
            }
            else 
            {
                printf("%d The number is negative\n",b);
            }
                    return (0);
}


