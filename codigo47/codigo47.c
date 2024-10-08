#include <stdio.h>

int main(){
    FILE *pF = fopen("C:\\Users\\Usuario\\OneDrive\\Área de Trabalho\\teste.txt","w");

    fprintf(pF,"Partick Estrela");

    fclose(pF);
 /*
    if (remove("test.txt") == 0)
    {
        printf("O arquivo foi excluido com sucesso");
    }else
    {
        printf("O arquivo não foi excluido");
    }
   

*/
    
return 0;
}