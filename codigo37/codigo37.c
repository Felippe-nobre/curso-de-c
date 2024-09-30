#include <stdio.h>
#include <string.h>
/*
    struct = Structs, também conhecidas como Registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado.
A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável.
// struct = coleção de membros relacionados ("variáveis") 
   //eles podem ser de diferentes tipos de dados
   // listado sob um nome em um bloco de memória
   // MUITO SEMELHANTE a classes em outras linguagens (mas sem métodos)
*/
struct Player
{
    char nome[12];
    int ponto;
};

int main(){

struct Player player1;
struct Player  player2;

strcpy(player1.nome, "Felippe");
player1.ponto = 4;
strcpy(player2.nome, "Nobre");
player2.ponto = 5;

printf("%s\n", player1.nome);
printf("%d\n", player1.ponto);
printf("%s\n", player2.nome);
printf("%d\n", player2.ponto);

return 0;
}