#include <stdio.h>

//typedef char user[25];
typedef struct 
{
    char nome[25];
    char senha[12];
    int id;
} User;



int main(){

  User user1 = {"Felippe", "senha1", 123456};
  User user2 = {"Nobre", "senha2", 123456789};

  printf("%s\n", user1.nome);
  printf("%s\n", user1.senha);
  printf("%d\n", user1.id);
  printf("\n");
  printf("%s\n", user2.nome);
  printf("%s\n", user2.senha);
  printf("%d\n", user2.id);



return 0;
}



// typedef = palavra-chave reservada que dá um "apelido" a um tipo de dados existente