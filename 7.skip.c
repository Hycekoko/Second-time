#include <stdio.h>

int main ()
{
    char a = 'a';

    for(a = 'a'; a <= 'z'; a++)
    {
        if((a == 'p') || (a == 'e'))
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
