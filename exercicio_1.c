// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero > 2000)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\ %d excede o limite de calculo", numero);
    }
    else
    {
        for (int i = numero; i <= 2000; i++)
        {
            if (i % 2 == 0)
            {
                printf("\n%d", i);
            }
        }
    }

    return 0;
}
