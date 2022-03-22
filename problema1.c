#include <stdio.h>
#include <math.h>

#define pi 3.141592653589793

int main(){
    float V, X, Y, raio, altura, AREA_base, AREA_lateral;
    
    printf("Informe a capacidade (m³): ");
    scanf("%f", &V);
    printf("Informe o custo da base (R$/m²): ");
    scanf("%f", &X);
    printf("Informe o custo da lateral (R$/m²): ");
    scanf("%f", &Y);
    
    printf("\n");
    
    raio = pow((V / (2 * pi)), (0.3333));
    altura = V / (pow(raio, 2) * pi);
    
    AREA_base = (pow(raio, 2)) * pi;
    AREA_lateral = 2 * pi * raio * altura;
    
    printf("O raio da base é: %.2f\n", raio);
    printf("A altura da lata é: %.2f\n", altura);
    printf("A area total é: %.2f\n", AREA_lateral + AREA_base*2);
    printf("O custo total é: R$%.2f\n", AREA_lateral * Y + 2 * X * AREA_base);
    
}
