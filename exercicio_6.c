// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int primo(int num)
{
    int i, resultado = 0;

    if (num == 1)
    {
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            resultado++;
            break;
        }
    }

    if (resultado == 0)
    {
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{

    int natural_1, natural_2;

    printf("Digite o primeiro natural: ");
    scanf("%d", &natural_1);

    printf("Digite o segundo natural: ");
    scanf("%d", &natural_2);

    if (natural_1 < natural_2)
    {
        for (int i = natural_1; i < natural_2; i++)
        {
            if (primo(i) == 1)
            {
                printf("\n%d", i);
            }
        }
    }
    else
    {
        for (int i = natural_2; i < natural_1; i++)
        {
            if (primo(i) == 1)
            {
                printf("\n%d", i);
            }
        }
    }
}
