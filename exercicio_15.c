// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int hora_utilizada;

    printf("Insira as horas utilizadas");
    scanf("%d", &hora_utilizada);

    if (hora_utilizada <= 20)
    {
        printf("Total a pagar: R$: 30,00")
    }
    else
    {
        int valor_excedente = hora_utilizada - 20;
        valor_excedente = valor_excedente * (10 / 100) * 30;
        printf("Total a pagar: R$: %d ", valor_excedente + 30);
    }

    return 0;
}
