#include <stdio.h>
#include <string.h>

void reverseString(char *);

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    reverseString(str);
    printf("Reversão da string: %s", str);
    return 0;
}

void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char tempStr = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tempStr;
    }
}
