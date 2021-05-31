// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    typedef struct
    {
        char sexo;
        float altura;
    } Pessoa;

    Pessoa pessoas[10];
    int aux = 0;
    int homens = 0;
    float media = 0.0;
    int maior, menor;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o sexo, m ou f: ");
        scanf("%c", &pessoas[i].sexo);

        printf("\nDigite a altura: ");
        scanf("%f", &pessoas[i].altura);
    }

    maior = pessoas[0].altura;
    menor = pessoas[0].altura;
    do
    {
        if (pessoas[aux].altura > maior)
        {
            maior = pessoas[aux].altura;
        }

        if (pessoas[aux].altura < menor)
        {
            menor = pessoas[aux].altura;
        }

        if (pessoas[aux].sexo == 'm')
        {
            homens++;
        }

        aux++;

    } while (aux != 10);

    aux = 0;
    int count = 0;

    while (aux < 10)
    {
        if (pessoas[aux].sexo = 'm')
        {
            media = media + pessoas[aux].altura;
            count++;
        }
        aux++;
    }
    media = media / count;

    printf("Numero de homens: %d", homens);
    printf("\nMaior idade: %d", maior);
    printf("\nMenor idade: %d", menor);
    printf("\nMédia de idade feminina %f", media);

    return 0;
}
