#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Entrada
    float B, H, p_cm, p_jd, p_pol;
    printf("Calculadora de perimetros de um retangulo\n");
    printf("Digite o valor da Base(B): ");
    scanf("%f", &B);
    printf("Digite o valor da Altura(H): ");
    scanf("%f", &H);

    //Processamento
    if (B>0 && H>0){
        p_cm = 2*(B + H);
        p_pol = p_cm / 2.54;
        p_jd = p_cm / 91.44;

        printf("Perimetro em centimentros: %.f1\n", p_cm);
        printf("Perimetro em polegadas: %.f1\n", p_pol);
        printf("Perimetro em jardas: %.f1\n", p_jd);
    }
    else
        printf("Dados Inválidos");
    return 0;
}
