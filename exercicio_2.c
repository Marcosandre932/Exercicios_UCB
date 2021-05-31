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

    if (mes == 1)
    {
        if (dia >= 21)
        {
            printf("Aquario");
        }
        else
        {
            printf("Capricornio");
        }
    }

    if (mes == 2)
    {
        if (dia >= 19)
        {
            printf("Peixes");
        }
        else
        {
            printf("Aquario");
        }
    }

    if (mes == 3)
    {
        if (dia >= 21)
        {
            printf("Aries");
        }
        else
        {
            printf("Peixes");
        }
    }

    if (mes == 4)
    {
        if (dia >= 21)
        {
            printf("Touro");
        }
        else
        {
            printf("Aries");
        }
    }

    if (mes == 5)
    {
        if (dia >= 21)
        {
            printf("Gemeos");
        }
        else
        {
            printf("Touro");
        }
    }

    if (mes == 6)
    {
        if (dia >= 21)
        {
            printf("Cancer");
        }
        else
        {
            printf("Gemeos");
        }
    }

    if (mes == 7)
    {
        if (dia >= 23)
        {
            printf("Leao");
        }
        else
        {
            printf("Cancer");
        }
    }

    if (mes == 8)
    {
        if (dia >= 23)
        {
            printf("Virgem");
        }
        else
        {
            printf("Leao");
        }
    }

    if (mes == 9)
    {
        if (dia >= 23)
        {
            printf("Libra");
        }
        else
        {
            printf("Virgem");
        }
    }

    if (mes == 10)
    {
        if (dia >= 23)
        {
            printf("Escorpiao");
        }
        else
        {
            printf("Libra");
        }
    }

    if (mes == 11)
    {
        if (dia >= 22)
        {
            printf("Sagitario");
        }
        else
        {
            printf("Escorpiao");
        }
    }

    if (mes == 12)
    {
        if (dia >= 22)
        {
            printf("Caporicornio");
        }
        else
        {
            printf("Sagitario");
        }
    }

    return 0;
}
