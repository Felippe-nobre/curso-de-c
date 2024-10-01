#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

const int MIN = 1;
const int MAX = 100;
int palpite;
int suposicoes;
int resposta;

srand(time(0));

//gerar um numemro aleatorio entre o minino e o maximo
resposta = (rand() % MAX) + MIN;

do
{
    printf("Digite o seu palpite:");
    scanf("%d", &palpite);
    if (palpite > resposta)
    {
        printf("Muito alto\n");
    }
    else if(palpite < resposta)
    {
        printf("Muito baixo\n");
    }else{
        printf("Correto\n");
    }
    suposicoes++;
} while (palpite != resposta);
  printf("**********************\n");
printf("Resposta: %d\n", resposta);
printf("suposicoes: %d\n", suposicoes);
  printf("**********************\n");

return 0;
}