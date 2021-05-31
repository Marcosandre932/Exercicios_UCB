// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float altura[50], altura_f[50], maior, menor;

    int sexo, aux1 = 0, aux2 = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Digite o sexo, 1 para M ou 2 para F");
        scanf("%d", &sexo);
        if (sexo == 1)
        {
            float altura_aux;
            printf("Digite a altura: ");
            scanf("%f", &altura_aux);
            altura[aux1] = altura_aux;
            aux1++;
        }
        else
        {
            float altura_aux;
            printf("Digite a altura: ");
            scanf("%f", &altura_aux);
            altura_f[aux2] = altura_aux;
            aux2++;
        }
    }

    maior = altura[0];
    menor = altura[0];
    for (int i = 0; i < aux1; i++)
    {
        if (altura[i] > maior)
        {
            maior = altura[i];
        }
        else
        {
            menor = altura[i];
        }
    }

    float media = 0.0;
    for (int i = 0; i < aux2; i++)
    {
        if (altura_f[i] > maior)
        {
            maior = altura_f[i];
        }
        else
        {
            menor = altura_f[i];
        }
        media = media + altura_f[i];
    }

    printf("Maior altura: %f", maior);
    printf("Menor altura: %f", menor);
    printf("Média feminina: %.2f", media / aux2);

    return 0;
}
