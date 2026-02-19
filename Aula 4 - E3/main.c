#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GAS 6.31
#define ALC 4.13

int main()
{
    //ENTRADA
    float LAP, L, A, P, M, Gasolina, Alcool;
    printf("CALCULADORA DE PREÇOS\n");
    printf("Informe o valor da Largura (L) em metros: ");
    scanf("%f", &L);
    printf("Informe o valor da Altura (A) em metros: ");
    scanf("%f", &A);
    printf("Informe o valor da Profundidade (P) em metros: ");
    scanf("%f", &P);
    printf("Preco da Gasolina (R$/Litro): R$%.1f\n", GAS);
    printf("Preco dO Alcool (R$/Litro): R$%.1f\n", ALC);

    //PROCESSAMENTO
    LAP = L*A*P;
    M = LAP*1000;
    Gasolina = M*GAS;
    Alcool = M*ALC;

    //SAIDA
    printf("Volume em (Metros Cubicos): %.1f\n", LAP);
    printf("Volume em (Litros): %.1f\n", M);
    printf("Valor total da gasolina em reais: R$%.1f\n", Gasolina);
    printf("Valor total do alcool em reais: R$%.1f\n", Alcool);
    printf("Valor na proporção: 20%% (Alcool) e 80%% (Gasolina): %.1f", (0.2*Alcool) + (0.8*Gasolina));

    return 0;
}
