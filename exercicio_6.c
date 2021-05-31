// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int opcao;

    printf("Menu de Opções");
    printf("\n============");
    printf("\n1 –Norte");
    printf("\n2 –Nordeste");
    printf("\n3 –Centro-Oeste");
    printf("\n4 –Sudeste");
    printf("\n5 –Sul");
    printf("\n0 –Sair do programa\n\n");
    scanf("%d", &opcao);

    if (opcao == 0)
    {
        return 0;
    }

    if (opcao == 1)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t Norte");
        return 0;
    }

    if (opcao == 2)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t Nordeste");
        return 0;
    }

    if (opcao == 3)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t Centro-Oeste");
        return 0;
    }

    if (opcao == 4)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t Sudeste");
        return 0;
    }

    if (opcao == 5)
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t Sul");
        return 0;
    }
}
