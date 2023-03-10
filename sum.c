#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 13, sum = 0, K = 0;

    while (K < index)
    {
        K = K + 1;

        sum = sum + K;
    }
    printf("%d", sum);
    return 0;
}