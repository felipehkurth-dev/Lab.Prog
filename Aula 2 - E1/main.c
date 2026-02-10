#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float preco, precoTsD, precoTcD;
    int quantidade, reajuste, totalDesc;
    printf("Realize sua compra online\n");
    printf("Preco em reais: ");
    scanf("%f", &preco);
    printf("Quantidade de unidades: ");
    scanf("%i", &quantidade);
    printf("Reajuste (Desconto): ");
    scanf("%i", &reajuste);

    //Processamento
    precoTsD = preco*quantidade;
    precoTcD = (preco * quantidade) * reajuste+1;
    totalDesc = reajuste;

    //Saida
    printf("Tabela de Precos\n");
    printf("Total a pagar (sem desconto): \n", precoTsD);
    printf("Total a pagar (com", reajuste, "%OFF) R$ ", precoTcD);
    printf("Total de Desconto: R$", totalDesc);

    return 0;
}
