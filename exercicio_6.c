// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Insira o numero: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("O numero %d e par", a);
    }
    else
    {
        printf("O numero %d nao e par", a);
    }

    return 0;
}
