// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i + j == 7)
            {
                printf("\nDado 1: %d | Dado 2: %d | Igual a 7", i, j);
            }
        }
    }

    return 0;
}
