#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DOLAR 5.21
#define EURO 6.13

int main()
{
    //ENTRADA
    float Real, Euro, Dolar;
    printf("CALCULADO DE CAMBIO\n");
    printf("Informe o valor em reais (R$): ");
    scanf("%f", &Real);

    //PROCESSAMENTO
    Euro = Real/EURO;
    Dolar = Real/DOLAR;

    //SAIDA
    printf("Valor informado em Reais (R$): %.1f\n", Real);
    printf("Valor convertido para Euro: %.1f\n", Euro);
    printf("Valor convertido para Dolar: %.1f\n", Dolar);
    return 0;
}
