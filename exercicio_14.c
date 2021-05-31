// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    if (a > b && a > c)
    {
        printf("%f", a);
    }

    if (b > a && b > c)
    {
        printf("%f", b);
    }

    if (c > b && c > a)
    {
        printf("%f", c);
    }

    return 0;
}
