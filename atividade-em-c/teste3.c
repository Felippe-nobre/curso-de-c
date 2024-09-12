#include <stdio.h>

int main(){
    double num1, num2, resultado;
    char operacao;
    printf("\n qual simbolo vai ser a conta (+ - * /):");
    scanf("%c",&operacao);

    printf("Informe o primeiro número: ");
    scanf("%lf", &num1);

    printf("Informe o segundo número: ");
    scanf("%lf", &num2);

    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        printf("Resultado: %.0lf\n",resultado);
        break;
    case '-':
    resultado = num1 - num2;
    printf("Resultado: %.0lf\n", resultado );
        break;
        case '*':
    resultado = num1 * num2;
    printf("Resultado: %.0lf\n", resultado );
        break;
        case '/':
    resultado = num1 / num2;
    printf("Resultado: %.0lf\n", resultado );
        break;
    default:
        break;
    }
    return 0;
}