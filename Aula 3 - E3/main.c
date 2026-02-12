#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float imc, M, H;
    printf("Calculadora de IMC (Indice de Massa Corporal):\n");
    printf("Informe sua altura: ");
    scanf("%f",&H);
    printf("Informe sua Massa (Quilogramas): ");
    scanf("%f", &M);

    //PROCESSAMENTO
    imc = M / (H * H);

    //SAIDA
    printf("O seu IMC (Indice de Massa Corporal) e: %.0f", imc);
    return 0;
}
