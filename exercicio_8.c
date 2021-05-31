// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int anacleto, felizberto;
    int anos = 0;
    anacleto = 150;
    felizberto = 110;

    while (felizberto < anacleto)
    {
        felizberto = felizberto + 3;
        anacleto = anacleto + 2;
        anos++;
    }

    printf("%d anos para que felizberto seja maior que anacleto", anos);
    return 0;
}
