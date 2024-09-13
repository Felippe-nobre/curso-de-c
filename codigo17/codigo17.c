#include <stdio.h>
#include <stdbool.h>

int main(){
// operador logico = && (ou) seria para passar duas funções

    float temp = 25;
    bool sol = false;
    if (temp > 0 && temp <= 30 && sol == true )
    {
        printf("O tempo esta bom!");
    }else
    {
        printf("O tempo esta ruim!");
    }
    
    


    return 0;
}