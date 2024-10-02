#include <stdio.h>

int main(){
//BITWISE OPERATORS = operadores especiais usados ​​na programação em nível de bit
   // (conhecer o binário é importante para este tópico)

   // & = E
   // | = OU
   // ^ = Exclusivo
   // << deslocamento para a esquerda
   // >> deslocamento para a direita


    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000

    z = x & y; 
    printf("E: %d\n", z);

    z = x | y;
    printf("Ou: %d\n", z);

    z= x ^ y;
    printf("Exclusivo: %d\n", z);

    z = x << 2;
    printf("deslocamento para a esquerda: %d\n", z);

     z = x >> 2;
    printf("deslocamento para a direita: %d", z);





return 0;
}