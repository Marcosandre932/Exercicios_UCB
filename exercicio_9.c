// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int numero, chute, tentativas = 0;

    printf("Digite o numero imaginado: ");
    scanf("%d", &numero);

    do
    {
        printf("\nDigite o chute: ");
        scanf("%d", &chute);

        tentativas++;
        if (chute < numero)
        {
            printf("Chute foi baixo!");
        }
        if (chute > numero)
        {
            printf("Chute foi Alto!");
        }

        if (chute == numero)
        {
            printf("Acertou!");
            printf("Numero: %d | Tentativas: %d", numero, tentativas);
        }

    } while (chute != numero);

    return 0;
}
