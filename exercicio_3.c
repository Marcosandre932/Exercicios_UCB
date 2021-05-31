// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char pais_1[20], pais_2[20], pais_3[20];

    int prata1, prata2, prata3, bronze1, bronze2, bronze3, ouro1, ouro2, ouro3, nota1, nota2, nota3;

    printf("Digite o nome do país 1: ");
    fgets(pais_1, 20, stdin);

    printf("quantidade de medalhas de bronze do país 1: ");
    scanf("%d", &bronze1);
    printf("quantidade de medalhas de prata do país 1: ");
    scanf("%d", &prata1);
    printf("quantidade de medalhas de ouro do país 1: ");
    scanf("%d", &ouro1);

    printf("Digite o nome do país 2: ");
    fgets(pais_2, 20, stdin);

    printf("quantidade de medalhas de bronze do país 2: ");
    scanf("%d", &bronze2);
    printf("quantidade de medalhas de prata do país 2: ");
    scanf("%d", &prata2;
    printf("quantidade de medalhas de ouro do país 2: ");
    scanf("%d", &ouro2);

    printf("Digite o nome do país 3: ");
    fgets(pais_3, 20, stdin);

    printf("quantidade de medalhas de bronze do país 3: ");
    scanf("%d", &bronze3);
    printf("quantidade de medalhas de prata do país 3: ");
    scanf("%d", &prata3);
    printf("quantidade de medalhas de ouro do país 3: ");
    scanf("%d", &ouro3);


    nota1 = (ouro1 * 3) + (prata1 * 2) + bronze1;
    nota2 = (ouro2 * 3) + (prata2 * 2) + bronze2;
    nota3 = (ouro3 * 3) + (prata3 * 2) + bronze3;

    if (nota1 > nota2 && nota1 > nota3)
    {
        if (nota2 > nota3)
        {
            printf("1 lugar: %s com %d pontos!", pais_1, nota1);
            printf("2 lugar: %s com %d pontos!", pais_2, nota2);
            printf("3 lugar: %s com %d pontos!", pais_3, nota3);
        }
        else
        {
            printf("1 lugar: %s com %d pontos!", pais_1, nota1);
            printf("2 lugar: %s com %d pontos!", pais_3, nota3);
            printf("3 lugar: %s com %d pontos!", pais_2, nota2);
        }
        
    }

    if (nota2 > nota1 && nota2 > nota3)
    {
        if (nota1 > nota3)
        {
            printf("1 lugar: %s com %d pontos!", pais_2, nota2);
            printf("2 lugar: %s com %d pontos!", pais_1, nota1);
            printf("3 lugar: %s com %d pontos!", pais_3, nota3);
        }
        else
        {
            printf("1 lugar: %s com %d pontos!", pais_2, nota2);
            printf("2 lugar: %s com %d pontos!", pais_3, nota3);
            printf("3 lugar: %s com %d pontos!", pais_1, nota1);
        }
        
    }

    if (nota3 > nota1 && nota3 > nota2)
    {
        if (nota1 > nota2)
        {
            printf("1 lugar: %s com %d pontos!", pais_3, nota3);
            printf("2 lugar: %s com %d pontos!", pais_1, nota1);
            printf("3 lugar: %s com %d pontos!", pais_2, nota2);
        }
        else
        {
            printf("1 lugar: %s com %d pontos!", pais_3, nota3);
            printf("2 lugar: %s com %d pontos!", pais_2, nota2);
            printf("3 lugar: %s com %d pontos!", pais_1, nota1);
        }
        
    }
    
    

    return 0;
}
