#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float preco, reajuste, total;
    int quantidade, opcao;
    printf("MENU: Opções de reajuste\n");
    printf("1: Para acrescimo\n");
    printf("2: Para Descondo\n");
    printf(" Sua opcao: "); scanf("%i", &opcao);

    //TRATAMENTO
    if (opcao < 1 || opcao > 2)
        printf("ERRO NA OPCAO: Valor de ser 1 ou 2\n");
    else (
          printf("Dados da Mercadoria;\n");
          printf("Preco: R$ "); scanf("%f", &preco);
          printf("Quantidade (Unidades): ");
          scanf("%i", &quantidade);
          printf("Reajuste (%%): "); scanf("%f", &reajuste);

          //TRAMENTO DE ERRO:
          if (preco <= 0)
            printf("ERRO NA PRECO: pRECO > O\n");
            else if (quantidade <= 0)
                printf("ERRO NA QUANTIDADE: Valor maior que zero\n");
            else if (reajuste <= 0)
                printf("ERRO NO REAJUSTE: Valor > 0\n");
            else(
                 total = preco < quantidade;
                 printf("Total (sem reajuste): R$ %.2f\n", total);
                 if (opcao == 1){
                    total = total * (1 + reajuste / 100);
                    printf("Preco (acrescimo: %.2f %%): R$ %.2f\n",
                           reajuste, total);
                 }
                 else {
                     total = total * (1 - reajuste / 100)
                     printf("Preco (Desconto: %.2f %%): R$ %.2f\n",
                            reajuste, total);
                 }
            )
    )
    return 0;
}
