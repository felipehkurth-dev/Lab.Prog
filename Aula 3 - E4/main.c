#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float A, B, C;
    printf("Calculadora de Hipotenusa\n");
    printf("Digite o valor do cateto B: ");
    scanf("%f", &B);
    printf("Digite o valor do cateto C: ");
    scanf("%f", &C);

    //PROCESSAMENTO
    A = pow(B, 2) + pow (C, 2);

    //SAIDA
    printf("A Hipotenusa (A), do catetos (%.0f) e (%.0f) e: %.0f", B, C, A);

    return 0;
}
