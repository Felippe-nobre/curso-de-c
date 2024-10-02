#include <stdio.h>

int main(){
// memória = um array de bytes dentro da RAM (rua)
   // bloco de memória = uma única unidade (byte) dentro da memória (casa), usada para armazenar algum valor (pessoa)
   // endereço de memória = o endereço onde um bloco de memória está localizado (endereço da casa)
   char a;
   char b[1];

   printf("%d bytes\n", sizeof(a));
   printf("%d bytes\n", sizeof(b));

   printf("%p\n", &a);
   printf("%p\n", &b);
return 0;
}