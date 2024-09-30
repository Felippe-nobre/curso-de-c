#include <stdio.h>
void sort(char array[], int tamanho){
    for (int i = 0; i < tamanho -1 ; i++)
    {
       for (int j = 0; j < tamanho - i -1 ; j++)
    {
        if (array[j] > array[j+1])
        {
            int temp = array[j];
            array [j] = array[j+1];
            array[j+1] = temp;
        }
        
    } 
    }
    
}
void printArray(char array[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", array[i]);
    }
    
}
int main(){

//int array[] = {9,1,8,2,7,3,6,4};
char array[] = {'F', 'A', 'D', 'B', 'C'};
int tamanho = sizeof(array)/ sizeof(array[0]);
sort(array, tamanho);
printArray(array, tamanho);

return 0;
}