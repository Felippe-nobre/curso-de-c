#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double raio;
    double circunferencia;
    double area;

    printf("\n Digite o raio do circulo:");
    scanf("%lf", &raio);

    circunferencia = 2 * PI * raio;
    area = PI * raio * raio;

    printf("\ncircunferencia: %lf", circunferencia); 
    printf("\narea: %lf", area); 


    return 0;
}