// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char pessoa_a[40], pessoa_b[40], pessoa_c[40];
    float altura_a, altura_b, altura_c;

    printf("Digite o nome da pessoa 1: ");
    fgets(pessoa_a, 40, stdin);
    printf("Digite altura da pessoa 1: ");
    scanf("%f", &altura_a);

    printf("Digite o nome da pessoa 2: ");
    fgets(pessoa_b, 40, stdin);
    printf("Digite altura da pessoa 2: ");
    scanf("%f", &altura_b);

    printf("Digite o nome da pessoa 3: ");
    fgets(pessoa_c, 40, stdin);
    printf("Digite altura da pessoa 3: ");
    scanf("%f", &altura_c);

    if (altura_a < altura_b && altura_a < altura_c)
    {
        printf("%s", pessoa_a);
        printf("\n%f", altura_a);
    }
    else if (altura_b < altura_a && altura_b < altura_c)
    {
        printf("%s", pessoa_b);
        printf("\n%f", altura_b);
    }
    else
    {
        printf("%s", pessoa_c);
        printf("\n%f", altura_c);
    }

    return 0;
}
