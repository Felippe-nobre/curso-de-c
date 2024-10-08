#include <stdio.h>
void printIdade(int idade)
{
    printf("Voce tem %d anos de idade\n", idade);
}
void printPIdade(int * pIdade){
    printf("Voce tem %d anos de idade\n", *pIdade);
}
int main(){

// ponteiro = uma referência "tipo variável" que contém um endereço de memória para outra variável, array, etc.
   // algumas tarefas são executadas mais facilmente com ponteiros
   // * = operador indireto (valor no endereço)

    int idade = 21;
    int * pIdade = NULL;//È uma boa pratica atribuir o Null se você estiver declarando um ponteiro e ainda não atribuio o a um valor
    pIdade = &idade;
   /* printf("Endereco do operador de idade: %p\n", &idade);
    printf("Valor da pIdade: %p\n", pIdade);

    printf("Tamanho da idade: %d bytes\n", sizeof(idade));
    printf("Tamanho da pIdade: %d bytes\n", sizeof(pIdade));

    printf("Valor da idade: %d\n", idade);
    printf("Valor do endereco armazenado: %d\n", *pIdade);//desreferenciação*/
    
    printIdade(idade);
    printPIdade(pIdade);
return 0;
}