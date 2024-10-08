#include <stdio.h>

int main(){

    FILE *pF = fopen("C:\\Users\\Usuario\\OneDrive\\Área de Trabalho\\ola.txt", "r");
    char buffer[255];
    if (pF == NULL)
    {
        printf("Incapaz de abrir o arquivo");
    }
    else
    {
        while (fgets(buffer,255,pF) != NULL)
    {
        printf("%s", buffer);
    }
    
    }
    fclose(pF);

return 0;
}