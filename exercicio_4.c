// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nome[40];
    int sexo;

    printf("Digite o nome: ");
    fgets(nome, 40, stdin);
    printf("Digite o sexo, 1 para M ou 2 para F: ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        printf("Ilmo. Sr %s", nome);
    }
    else if (sexo == 2)
    {
        printf("Ilma. Sra %s", nome);
    }
    else
    {
        printf("Sexo inválido");
    }

    return 0;
}
