#include<stdio.h>
int main(){
    char nome[25];
    int idade;

    printf("\nQual seu Nome?");
    //scanf("%s", &nome);
    fgets(nome, 25, stdin);

    printf("\nQual sua idade?");
    scanf("%d", &idade);

    printf("\nOi %s ,seja bem vindo", nome);
    printf("\nVoce tem %d anos de idade", idade);

    return 0;
}