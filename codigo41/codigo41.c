#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//números pseudoaleatórios = Um conjunto de valores ou elementos que é estatisticamente aleatório
   // (Não use isso para nenhum tipo de segurança criptográfica)
 
   // Usa a hora atual como semente para o gerador # aleatório
   //srand(tempo(0));
 
   // rand() gera um número pseudoaleatório entre 0 - 32.767


int main(){

srand(time(0));

int numero1 = (rand() % 20) + 1;
int numero2 = (rand() % 20) + 1;
int numero3 = (rand() % 20) + 1;

printf("%d\n", numero1);
printf("%d\n", numero2);
printf("%d\n", numero3);


return 0;
}