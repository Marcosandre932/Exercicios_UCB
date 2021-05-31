// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nascimento, atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &atual);

    idade = atual - nascimento;

    printf("%d dias vividos!", idade * 365);

    return 0;
}
