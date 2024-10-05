#include <stdio.h>
int main(){
    int idade;

    printf("\n Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce esta inscrito");
    }
    else if(idade == 0){
        printf("Voce acabou de nascer");
    }
    else if(idade < 0){
        printf("Erro... Voce nao nasceu");
    }
    else{
        printf("Voce nao ta autorizado");
    }
    return 0;
}