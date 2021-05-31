// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, resultado = 0;
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);

    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    for (int i = 0; i < a; i++)
    {
        resultado = resultado + b;
    }
    printf("Resultado: %d", resultado);

    return 0;
}
