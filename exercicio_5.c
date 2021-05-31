// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    char opcao;

    printf("Digite seu sexo com M ou F: ");
    scanf("%c", &opcao);

    char *sexo = (opcao == 'M') ? "Masculino" : "Feminino";

    printf("%s", sexo);
    return 0;
}
