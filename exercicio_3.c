// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float resultado, pessoas[9];
    int aux = 0;

    for (int i = 0; i < 9; i++)
    {
        printf("Digite a altura da pessoa %d", i + 1);
        scanf("%f", pessoas[i]);
    }

    resultado = pessoas[0];
    while (aux < 10)
    {
        if (pessoas[aux] < resultado)
        {
            resultado = pessoas[aux];
        }

        aux++;
    }

    printf("A menor altura é %f", resultado);

    return 0;
}
