// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float lista[3], aux;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &lista[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (lista[j] > lista[i])
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\n", lista[i]);
    }

    return 0;
}
