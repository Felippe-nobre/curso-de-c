#include <stdio.h>

int main(){

    char operador;
    double num1,num2,resultado;
    
    printf("\n qual simbolo vai ser a conta (+ - * /):");
    scanf("%c", &operador);

    printf("Digite o numero 1:");
    scanf("%lf", &num1);
    printf("Digite o numero 2:");
    scanf("%lf", &num2);
    
    switch (operador)
    {
    case '+':
        resultado =  num1 + num2;
        printf("\nResultado: %.2lf", resultado);
        break;
    
    case '-':
    resultado = num1 - num2;
    printf("\nResultado: %.2lf", resultado);
        break;
        case '*':
        resultado = num1 * num2;
        printf("\nResultado: %.2lf", resultado);
        break;
        case '/':
        resultado = num1 / num2;
        printf("\nResultado: %.2lf", resultado);
        break;
        default:
        printf("%coperacao invalida", operador);
    }



    return 0;
}