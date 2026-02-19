#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ENTRADA
    float X1, X2, Y1, Y2, P, Q, D;
    printf("DISTANCIA ENTRE PONTOS P(X1, X2) E Q(Y1, Y2)\n");
    printf("Coordenada X1 - Ponto P: ");
    scanf("%f", &X1);
    printf("Coordenada X2 - Ponto P: ");
    scanf ("%f", &X2);
    printf("Coordenada Y1 - Ponto Q: ");
    scanf ("%f", &Y1);
    printf("Coordenada Y2 - Ponto Q: ");
    scanf ("%f", &Y2);

    //PROCESSAMENTO
    P = pow(X1, X2);
    Q = pow(Y1, Y2);
    D = pow(P, 1.0/Q);

    //SAIDA
    printf("A DISTANCIA ENTRE DOIS PONTOS P (%.1f, %.1f) E Q (%.1f, %.1f) E: %.1f", X1, X2, Y1, Y2, D);
    return 0;
}
