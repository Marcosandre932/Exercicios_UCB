// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char placa[9];
    float velocidade;

    printf("Digite a placa: ");
    fgets(placa, 9, stdin);
    printf("Digite a velocide: ");
    scanf("%f", &velocidade);

    printf("Placa: %s", placa);
    printf("\nVelocidade: %.2f", velocidade);
    if (velocidade > 80)
    {
        printf("Acima da velocidade da via. Motorista multado");
    }
    else
    {
        printf("Dentro da velocidade da via. Motorista nao multado");
    }

    return 0;
}
