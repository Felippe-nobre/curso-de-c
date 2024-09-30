#include <stdio.h>
// 2D array = são matriz onde cada elemento é um inteiro array, é útil se cocê precisar de uma matriz grade ou tabela de dados
int main(){
               //min max
    //int numero [2][3] = {{1,2,3}, {4,5,6}};
    int numero[3][3];
    
    int linha = sizeof(numero)/sizeof(numero[0]);
    int coluna = sizeof(numero[0])/sizeof(numero[0][0]);

    printf("linha: %d\n", linha);
    printf("coluna: %d\n", coluna);


    numero[0][0] = 1; 
    numero[0][1] = 2; 
    numero[0][2] = 3; 
    numero[1][0] = 4; 
    numero[1][1] = 5; 
    numero[1][2] = 6;
    numero[2][0] = 7;
    numero[2][1] = 8;
    numero[2][2] = 9;    

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
           printf("%d ", numero[i][j]);
        }
        printf("\n");
        
    }
    
    

return 0;
}