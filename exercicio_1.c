// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float percentual;

    printf("Digite o percentual: ");
    scanf("%f", &percentual);

    percentual = (percentual / 100) * 555;

    printf("%.2f", percentual);

    return 0;
}
