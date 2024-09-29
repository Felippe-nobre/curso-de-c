#include <stdio.h>

int main(){

int linhas;
int colunas;
char simbolo;

printf("\n  Insira o numero de linhas:");
scanf("%d", &linhas);

printf("\n  Insira o numero de colunas:");
scanf("%d", &colunas);

scanf("%c");

printf("Digite um simbolo:");
scanf("%c",&simbolo);

for (int i = 1; i <= linhas; i++)
{
    for (int J = 1; J <= colunas; J++)
    {
        printf("%c", simbolo);
    }
    printf("\n");
    
}


return 0;
}