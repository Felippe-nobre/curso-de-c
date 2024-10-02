#include <stdio.h>
#include <ctype.h>

int main(){
char questao[][100] = {"1. Em que ano o jogo The Last of Us parte II foi lancado?: " ,
                       "2. Qual o jogo que tem um ser que mata Deuses?: " ,                                                         
                        "Qual soulslike ganhou o jogo do ano em 2022?: "};

char opecoes[][100] = {"A. 2019", "B. 2018", "C. 2020", "D. 2022",
                        "A. God of War", "B. Good of wair", "C. matador de deuses", "D. O bom de guerra",
                        "A. Bloodborne", "B. Elden ring", "C. Dark-soulsIII", "D. lies Of P"};

char Respostas[3] = {'C', 'A', 'B'};
int numeroDeQuestoes = sizeof(questao)/ sizeof(questao[0]);

char palpite = ' ';
int ponto = 0;

printf("Quiz Game\n");

for (int i = 0; i < numeroDeQuestoes; i++)
{
   printf("*********************\n");
   printf("%s\n", questao[i]);
   printf("*********************\n");

   for(int j = (i*4); j < (i*4) + 4; j++ ){
    printf("%s\n", opecoes[j]);
   }
   
   printf("palpite:");
   scanf("%c", &palpite);
   scanf("%*c");

   palpite = toupper(palpite);


   if (palpite == Respostas[i])
   {
    printf("Correto\n");
    ponto++;
   }
   else
   {
    printf("Errou\n");
   } 
}
printf("*********************\n");
printf("Pontuacao: %d/%d\n", ponto,numeroDeQuestoes);
printf("*********************\n");




return 0;
}