#include <stdio.h>


int main(){

int numero = 0;
int soma = 0;


do{
    printf("Digite acima de 0: ");
    scanf("%d",&numero);
    if (numero > 0)
    {
        soma+= numero;
    }
    
}while (numero > 0);
printf("soma: %d", soma);



return 0;
}