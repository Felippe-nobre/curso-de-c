#include <stdio.h>


int main(){

    int mes;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);
 if (mes <= 0 || mes >=13)
    {
        printf("Numeor errado .... porfavor digite numero de 1 a 12\n");
        printf("Tente novamente:");
        scanf("%d",&mes);
    } 
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
        case 2:
        printf("Feveriro");
        break;
    case 3:
        printf("Marco");
        break;
    
    case 4:
        printf("Abril");
        break;
    
    case 5:
        printf("Maio");
        break;
    
    case 6:
        printf("Junho");
        break;
    
    case 7:
        printf("Julho");
        break;
    
    case 8:
        printf("Agosto");
        break;
    
    case 9:
        printf("Sestembro");
        break;
    
    case 10:
        printf("Outubro");
        break;
    
    case 11:
        printf("Novembro");
        break;
    
    case 12:
        printf("Dezembro");
        break;
    

    
    default:
   
    
        break;
    }





    return 0;
}