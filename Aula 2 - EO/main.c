#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    //algoritmo: entrada
    float R, area, volume;
    printf("PROGRAMA: ESFERA\n");
    printf("Entre com o Raio (R) em metros: ");
    scanf("%f", &R);
    // processamento
    area = 4 * PI * pow(R, 2); // Metros quadrados
    volume = 4.0 / 3 * PI * pow (R, 3); // Metros cúbicos
    // Saída
    printf("DADOS DA ESFERA: \n");
    printf("Area: %.4f metros quadrados\n", area);
    printf("Volume: %.4f metros cubicos\n", volume);
    printf("Volume: %.4f Litros\n", volume*1000);
    return 0;
}
