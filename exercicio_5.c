// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N, aux, fatorial;
    do
    {
        printf("Escreva o numero a ser calculado o fatorial:");
        scanf("%d", &N);

    } while (N < 0);

    aux = 1;
    fatorial = 1;
    do
    {
        fatorial *= aux;

        aux += 1;

    } while (aux <= N);
    printf("Resultado: %d", fatorial);
}
