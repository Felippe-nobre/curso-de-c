#include <stdio.h>

int main(){

char nota;

printf("\n insira uma nota de letra:");
scanf("%c", &nota);

switch(nota){
    case 'A':
    printf("Perfeito!\n");
    break;
    case 'B':
    printf("Voce foi bem\n");
    break;
    case 'C':
    printf("Ok, mais ou menos na proxima voce consegue\n");
    break;
    case 'D':
    printf("Pelo menos nao tirou F\n");
    break;
    case 'F':
    printf("Reprovou\n");
    break;
    default:
    printf("Coloque nota validas");
}





    return 0;
}