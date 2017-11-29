#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int i;
    int u = 0;

    for(i = 0; i < 17; i++) {
        u = soma(u, i);
        printf("%d\n", u);
    }

    return 0;
}
