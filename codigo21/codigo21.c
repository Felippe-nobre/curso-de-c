#include <stdio.h>

void parabens(char x[], int y){

    printf("\nfeliz aniversario para voce %s !", x);
    printf("\nVoce tem  %d anos de idade", y);

}
int main(){

    char nome[] = "Felippe";
    int idade = 21;
    parabens(nome, idade);

return 0;
}