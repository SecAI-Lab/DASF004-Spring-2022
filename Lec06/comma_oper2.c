#include <stdio.h>
int main()
{
    int x = 10;
    int y = (x++, ++x);
    printf("%d", y);

    x = 10;
    y = (++x, x++);
    printf("%d", y);

    return 0;
}

