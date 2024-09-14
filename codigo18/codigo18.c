#include <stdio.h>
#include <stdbool.h>

int main(){

    // operador logico: || checka  se a codição é verdadeira ou falsa  

    float temp = -250000;
    
    if (temp <= 0 || temp >=30){
        printf("O tempo esta bom!");
    }else
    {
        printf("O tempo esta ruim!");
    }
    
    

   
   
    return 0;
}