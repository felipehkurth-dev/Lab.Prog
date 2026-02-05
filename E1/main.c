/*
    Escrever uma Mini Calculadora de números inteiros: N1 e N2.

    Sendo assim, exibir na tela o resultado das operações aritiméticas a seguir:

    Soma: +
    Subtração: -
    Multiplicação: *
    Divisão (float): /
    DIV: Quociente da Divisão (int): int / int = int
    MOD: Resto da Divisão (int): int % int = int
    Potenciação (float): pow(base, expoente)
    Radiciação (float): pow(base, 1.0 / expoente)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // ALGORITMO: ENTRADA + PROCESSAMENTO (ULA)+SAÍDA
    //ENTRADA
    int N1, N2;
    printf("MINI CALCULADORA DE INTEIROS: N1 e N2\n");
    printf("VALOR DE N1: ");
    scanf("%i", &N1);
    printf("VALOR DE N2: ");
    scanf("%i", &N2);

    // ALGORITMO: PROCESSAMENTO (ULA)+SAÍDA
    printf("ADICAO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRACAO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICACAO: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("DIVISAO(float): N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
    printf("DIVISAO(float): N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
    printf("QUOCIENTE(int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO(int): N1 mod N2 = %i %% %i = %.i\n", N1, N2, N1 % N2);
    printf("POTENCIACAO: pow(N1, N2) = pow(%i, %i) = %.1f\n", N1, N2, pow(N1, N2));
    printf("RADICIACAO: RAIZ(N1, N2) = RAIZ(%i, %i) = %.1f\n", N1, N2, pow(N1, 1.0 / N2));
    return 0;

}
