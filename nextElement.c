#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1 = a 2 = b 3 = c 4 = d 5 = e 6 = f
    int choice, num, c;
    int predecessor = 0, predecessor1 = 0, later = 0;
    int anterior1 = 2, anterior2 = 10, proximo;
    printf("Escolha um caso: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Digite um número: ");
        scanf("%d", &num);
        num += 2;
        printf("O próximo número será: %d ", num);
        break;
    case 2:
        printf("Digite um número: ");
        scanf("%d", &num);
        num *= 2;
        printf("O próximo número será: %d ", num);
        break;
    case 3:
        printf("Digite um número: ");
        scanf("%d", &num);
        num = num * num;
        printf("O próximo número será: %d ", num);
        break;
    case 4:
        printf("Digite o número anterior: ");
        scanf("%d", &num);
        int num1 = num + 12;
        printf("O próximo número será: %d ", num1);
        break;
    case 5:
        printf("Digite dois números: ");
        scanf("%d %d", &predecessor, &predecessor1);
        later = predecessor + predecessor1;
        printf("O próximo número será: %d ", later);
        predecessor = predecessor1;
        predecessor1 = later;
        break;
    case 6:
        printf("Digite um números: ");
        scanf("%d",&predecessor1);
        if (predecessor1 % 2 == 0)
        {
            later = predecessor1 + 2;
        }
        else
        {
            later = predecessor1 - 1;
        }

        printf("O próximo número será: %d\n", later);
        break;

    default:
        break;
    }
    return 0;
}
