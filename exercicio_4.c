// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    int i, fib1 = 1, fib2 = 1, soma;
    for (i = 3; i <= n; i = i + 1)
    {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}

int main(int argc, char const *argv[])
{

    printf("%d\n", fib(20));
    return 0;
}
