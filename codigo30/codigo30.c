#include <stdio.h>
//continue = uma instrução continue iá pular o resto de uma seção de codigo e forçar o proxima intreação de um loop 
// break = saida do loop/ switch
int main(){

for (int i = 1; i <= 20; i++)
{
    if (i == 13)
    {
        break;
    }
    
    printf("%d\n", i);
}


return 0;
}