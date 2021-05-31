// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12)
    {
        printf("Mês inválido! ");
        return 0;
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if (dia < 1 || dia > 31)
        {
            printf("Dia inválido! ");
            return 0;
        }
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia < 1 || dia > 30)
        {
            printf("Dia inválido! ");
            return 0;
        }
    }

    if (mes == 2)
    {
        if (ano % 4 == 0)
        {
            if (dia < 1 || dia > 29)
            {
                printf("Dia inválido! ");
                return 0;
            }
        }
        else
        {
            if (dia < 1 || dia > 28)
            {
                printf("Dia inválido! ");
                return 0;
            }
        }
    }

    printf("Ano válido! %d/%d/%d", dia, mes, ano);

    return 0;
}
