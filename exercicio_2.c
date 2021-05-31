// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float a, b, c, maior;

    printf("Digite o 1 valor: ");
    scanf("%f", &a);

    printf("Digite o 2 valor: ");
    scanf("%f", &b);

    printf("Digite o 3 valor: ");
    scanf("%f", &b);

    if (a > b && a > c)
    {
        maior = a;
    }
    else if (b > a && b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t %.2f", maior);

    return 0;
}
