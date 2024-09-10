#include <stdio.h>

int main(){
//shorthands de operadores
   int x = 10;
   /*x = x + 2;
    x+=2;
    x = x-3;
    x-=3;
     x = x*3;
    x*=3;
     x = x/3;
    x/=3;
    */ 
     x = x%3;
    x%=3;   

    printf("%d", x);
    return 0;
}