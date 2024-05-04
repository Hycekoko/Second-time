#include <stdio.h>

int main (void)
{
    char a = 'a';

    for (a; a <= 'z'; a++)
    {
        if (( a == 'p' ) || ( a == 'q'))
        {
            continue;
        }
        else
        {
            putchar(a);
        }
    }
    putchar('\n');
    return (0);
}


