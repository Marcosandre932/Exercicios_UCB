// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float media = 0.0;
    int numero, aux = 0;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0 && numero != 0)
        {
            media = media + numero;
            aux++;
        }

    } while (numero != 0);
    media = media / aux;
    printf("Media: %f", media);

    return 0;
}
