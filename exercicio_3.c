// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Insira o lado 1: ");
    scanf("%d", &a);

    printf("Insira o lado 2: ");
    scanf("%d", &b);

    printf("Insira o lado 3: ");
    scanf("%d", &c);

    if (a > b + c || b > c + a || c > b + a)
    {
        printf("Não é possível formar um triângulo");
    }

    return 0;
}
