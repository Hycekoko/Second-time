#include <stdio.h>
int add ();
int main ()
{
    printf("Still on Hello World\n");
    printf("This is another try,Just to confirm\n");
        add ();
    return (0);
}

int add ()
{
    int p = 59;
    int r = 57;
    int result = p + r;
    printf("%d\n", result);
}


