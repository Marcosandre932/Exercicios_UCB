// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);

    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d", a - b);
    }
    else if (b > a)
    {
        printf("%d", b - a);
    }
    else
    {
        printf("0");
    }
    return 0;
}
