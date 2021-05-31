// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Insira o valor: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("%d\n", n * -1);
    }
    else
    {
        printf("%d\n", n);
    }
    return 0;
}
