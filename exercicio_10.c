// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeros = 0;

    for (int i = 0; i < 100; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numeros);
        if (numeros < 0)
        {
            printf("Numeros lidos: %d", i + 1);
            break;
        }
    }
    return 0;
}
