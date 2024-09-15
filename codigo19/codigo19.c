#include <stdio.h>
#include <stdbool.h>

int main(){

    // operador logico : ! serve para negação

    bool solarado = false;
    if (!solarado)
    {
        printf("\n nao ta sol la fora");
    }else
    {
        printf("\n ta sol la fora");
    }
    
    
    return 0;
}