#include <stdio.h>
#include <ctype.h>

int main(){
    char  uni;
    float temp;

    printf("\n Temperatura vai ser em (f) ou (c)?:");
    scanf("%c", &uni);

    uni = toupper(uni);

    if (uni == 'C')
    {
        printf("\nInsira a temperatura em Celsius:");
        scanf("%f", &temp);
        temp = (temp * 9 / 5 ) + 32;
        printf("A temperatura em Fatenheit vai ser: %.1f",temp);
    }else if (uni == 'F')
    {
       printf("\nInsira a temperatura em Fatenheit:");
        scanf("%f", &temp);
        temp = ((temp- 32 )*  5 ) / 9 ;
        printf("A temperatura em Celsius vai ser: %.1f",temp);
    }else
    {
        printf("\n %c unidade de medida invalida",uni);
    }
    
    
    


    return 0;
}