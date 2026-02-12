#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Entrada
    float L, area;
    printf("Calculadora de area\n");
    printf("Digite o valor de L (Lado): ");
    scanf("%f", &L);

    //Processamento
    area = L * L;

    //Saída
    printf("A area de um quadrado de Lado (%.0f) e: %.0f", L, area);

    return 0;
}
