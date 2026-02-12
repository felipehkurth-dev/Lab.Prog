#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float L, H, area;
    printf("Calculadora de area\n");
    printf("Digite o valor de L (Lado): ");
    scanf("%f", &L);
    printf("Digite o valor de H (Altura): ");
    scanf("%f", &H);

    //PROCESSAMENTO
    area = L * H;

    //SAIDA
    printf("A area de um quadrado de Lado (%.0f) e altura (%.0f) e: %.0f", L, H, area);
    return 0;
}
