#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Entrada
    float M, H, IMC;
    printf("Informe sua massa(quilos): ");
    scanf("%f", &M);
    printf("Informe sua altura(metros): ");
    scanf("%f", &H);

    //Processamento
    if (M <= 0 || H <= 0)
        printf("ERRO");

    else {
        IMC = M / (H*H);

    if (IMC < 18.5){
        printf("Classificacao: Magreza");
    }
    else if (18.5 <= IMC && IMC < 25){
        printf("Classificacao: Saudavel");
    }
    else if (25 <= IMC && IMC < 30){
        printf("Classificacao: Sobrepeso");
    }
    else if (30 <= IMC && IMC < 35){
        printf("Classificacao: Obesidade grau I");
    }
    else if (35 <= IMC && IMC < 40){
        printf("Classificacao: Obesidade grau II");
    }
    else if (IMC >= 40){
        printf("Classificacao: Obesidade grau III");
    }
    else
        printf("Dados invalidos");
    }
    return 0;
}
