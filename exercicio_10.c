// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int tinto = 0, rose = 0, branco = 0;
    char opcao;

    do
    {
        printf("Digite o vinho \n\t T - Tinto \n\t R - Rose \n\t B - Branco");
        scanf("%c", &opcao);

        if (opcao == 'T')
        {
            tinto++;
        }

        if (opcao == 'R')
        {
            rose++;
        }

        if (opcao == 'B')
        {
            branco++;
        }

    } while (opcao != 'F');
    int total = tinto + rose + branco;

    float tinto_p, rose_p, branco_p;
    tinto_p = (total / 100) * tinto;
    rose_p = (total / 100) * rose;
    branco_p = (total / 100) * branco;

    printf("Tinto %f %", tinto_p);
    printf("Rose %f %", rose_p);
    printf("Branco %f %", branco_p);

    return 0;
}
