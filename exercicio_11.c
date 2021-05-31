// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char finalista1[50], finalista2[50], finalista3[50];
    int qtd_juizes, nota1 = 0, nota2 = 0, nota3 = 0;

    printf("Nome do finalista 1: ");
    fgets(finalista1, 50, stdin);

    printf("Nome do finalista 2: ");
    fgets(finalista2, 50, stdin);

    printf("Nome do finalista 3: ");
    fgets(finalista3, 50, stdin);

    printf("Quantidade juizes: ");
    scanf("%d", &qtd_juizes);

    for (int i = 0; i < qtd_juizes; i++)
    {
        int temp_nota = 0;
        printf("Nota do juiz %d para o finalista %s: ", i + 1, finalista1);
        scanf("%d", &temp_nota);
        nota1 = nota1 + temp_nota;

        printf("Nota do juiz %d para o finalista %s: ", i + 1, finalista2);
        scanf("%d", &temp_nota);
        nota1 = nota2 + temp_nota;

        printf("Nota do juiz %d para o finalista %s: ", i + 1, finalista3);
        scanf("%d", &temp_nota);
        nota1 = nota3 + temp_nota;
    }

    printf("Concorrentes e notas: ");
    printf("Concorrente: %s | nota: %d", finalista1, nota1);
    printf("Concorrente: %s | nota: %d", finalista2, nota2);
    printf("Concorrente: %s | nota: %d", finalista3, nota3);

    if (nota1 > nota2 && nota1 > nota3)
    {
        printf("Concorrente vencedor: %s | nota: %d", finalista1, nota1);
    }
    else if (nota2 > nota1 && nota2 > nota3)
    {
        printf("Concorrente vencedor: %s | nota: %d", finalista2, nota2);
    }
    else
    {
        printf("Concorrente vencedor: %s | nota: %d", finalista3, nota3);
    }

    return 0;
}
