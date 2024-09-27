#include <stdio.h>
void Ola(char[],int);
int main(){

char nome[] = "Felippe";
int idade = 21;
    Ola(nome,idade);
return 0;
}

void Ola (char nome[], int idade){
    printf("\n Ola %s", nome);
    printf("\n Voce tem %d anos de idade", idade);
}