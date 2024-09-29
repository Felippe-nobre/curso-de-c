#include <stdio.h>
//sizeof =  permite que você evite especificar tamanhos de dados dependentes do computador em seus programas.
int main(){

double preco[] = {5.99,10.99,15.98,25.98,20.97};
for (int i = 0; i < sizeof(preco)/sizeof(preco[0]); i++)
{
   printf("%.2lf\n", preco[i]);
}



return 0;
}