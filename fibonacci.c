#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a = 0, b = 1;
    printf("Insira um número:\n");
    scanf("%d", &n);
    while (a <= n)
    {
        if (a == n)
        {
            printf("O número %d pertence à sequência de Fibonacci\n", n);
            return;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    printf("O número %d não pertence à sequência de Fibonacci\n", n);
    return 0;
}
