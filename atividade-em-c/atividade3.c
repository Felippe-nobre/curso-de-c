#include <stdio.h>

int main(){
    double num1, num2, resultado;
    char operacao;
    
    printf(" qual simbolo vai ser a conta (+ - * /):");
    scanf(" %c",&operacao);
<<<<<<< HEAD:atividade-em-c/atividade3.c
    printf("Informe o primeiro número: ");
    scanf("%lf", &num1);
    printf("Informe o segundo número: ");
    scanf("%lf", &num2 );
=======
    printf("Informe o primeiro nÃºmero: ");
    scanf("%lf", &num1);
    printf("Informe o segundo nÃºmero: ");
    scanf("%lf", &num2);
>>>>>>> 1e9c1fbbbe2f0555c47dab598c8a3db4c27a7564:atividade-em-c/teste3.c

    

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
        if (num2!=0)
        {
            resultado = num1 / num2;
        printf("Resultado: %.0lf\n", resultado );
        }else{
<<<<<<< HEAD:atividade-em-c/atividade3.c
            printf("Erro: divisão por zero invalida.\n");
=======
            printf("Erro: divisÃ£o por zero invalida.\n");
>>>>>>> 1e9c1fbbbe2f0555c47dab598c8a3db4c27a7564:atividade-em-c/teste3.c
        }
        break;
    default:
        printf("Erro...!");
        break;
    }
    return 0;
}