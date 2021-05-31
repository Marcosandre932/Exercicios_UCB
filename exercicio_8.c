// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float altura;
    int sexo;

    printf("Digite o sexo, 1 para M ou 2 para F: ");
    scanf("%d", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (sexo == 1)
    {
        printf("Peso ideal: %f", (72.5 * altura) - 58);
    }
    else if (sexo == 2)
    {
        printf("Ilma. Sra %s", (62.1 * altura) - 44.7);
    }
    else
    {
        printf("Sexo inválido");
    }

    return 0;
}
