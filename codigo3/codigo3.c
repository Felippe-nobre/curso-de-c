#include <stdio.h>
int main(){
    //int = a valores inteiros
    int x;
    x = 123;
    int y = 456;
    int idade = 21;
   
    float decimal = 2.05;
     //float = valores quebardos.%f
    char media = 'C';
    //char = carcter unicos,%c
    char nome[] = "Felippe";
     // char  [] = serve para amarezenar uma string, já que string é orientada a objeto e em c não possui orientção a obejto.%s
    printf("Ola %s\n", nome);
    printf("Voce tem %d anos de idade\n", idade );
    printf("sua media  %c \n",media);
    printf("sua nota em decimal %f\n", decimal);
    return 0;
}