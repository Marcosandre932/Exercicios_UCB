// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int opcao;

    printf("Digite a opcao de 1 a 5: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5)
    {
        printf("Opcao invalida");
    }
    else
    {
        if (opcao == 1)
        {
            printf("Cadeira");
        }
        if (opcao == 2)
        {
            printf("Mesa de computador");
        }
        if (opcao == 3)
        {
            printf("Estante de livros");
        }
        if (opcao == 4)
        {
            printf("Mesa de impressora");
        }
        if (opcao == 5)
        {
            printf("Estante de CD");
        }
    }

    return 0;
}
