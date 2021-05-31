// Nome: Marcos André Silveira
// Matrícula : UC12029761
// Curso: Engenharia Civil
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    char caractere;

    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    printf("\nCaractere: %c", caractere);
    printf("\nDecimal: %d ", caractere);
    printf("\nOctal: %o", caractere);
    printf("\nHexadecimal: %x", caractere);

       return 0;
}
