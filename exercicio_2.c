// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int i, n;
    int Fat = 1;
    n = 5;
    i = n;
    while (i >= 1)
    {
        Fat *= i;
        i--;
    }

    printf("%d", Fat);

    return 0;
}
