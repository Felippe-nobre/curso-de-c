#include <stdio.h>
// enum = um tipo definido pelo usuário de identificadores inteiros nomeados
   // ajuda a tornar um programa mais legível

   enum Dia{ Dom = 1 , Seg = 2, Ter = 3, Qua = 4, Qui = 5, Sex = 6, Sab = 7};
int main(){
enum Dia Hoje = Seg;
printf("%d", Hoje); // Enums não são strings,mas podem ser tratados como numeros inteiros
if (Hoje == Dom || Hoje == Sab)
{
    printf("\nFim de semana");
}
else
{
    printf("\ntenho que trabalahar");
}

return 0;
}