#include <stdio.h>
#include <string.h>

int main(){
char nome[25];

printf("\n Como voce se chama?");
fgets(nome, 25, stdin);
nome [strlen(nome) -1] ='\0';



while (strlen(nome) == 0)
{
    printf("\n Voce nao colocou seu nome");
    printf("\n Como voce se chama?");
    fgets(nome, 25, stdin);
    nome[strlen(nome) -1] ='\0';
}

printf("Ola %s", nome);

return 0;
}