#include <stdio.h>
#include <string.h>

int main(){


    char string1[] = "Felippe";
    char string2[] = "Nobre";


    //strlwr(string1);                   //comando para deixar a string minùscula
    //strupr(string1);                  //comando para deixar a string maniúscula
    //strcat(string1, string2);        //comando para unficar duas strings
    //strncat(string1, string2,1);    //comando para determinar a quantidade de caracter
    //strcpy(string1, string2);      //comando para copiar a string 2 para a string 1
    //strncpy(string1, string2, 4); //comando para copiar um numero de cacaracter de uma string unficando com outra
    //strset(string1, '!');        //comando para muadar a string para determinado caracter
    //strnset(string1, 'x', 1);   //comando para mudar determinado caracter da string
    //strrev(string1);             //comando para organizar a string de traz para frente  

    //int result = strlen(string1); // comando para mostrar o comprimento da string
    //int result = strcmp(string1, string2); //comando para comparar as strings se caso forem iguais apresenta valor (0) se não apresenta valor(-1)
    // int result = strncmp(string1, string2, 1); //comando para comparar se detemiandos caracters são identicos das strings 
    //int result = strcmpi(string1, string2); // comando para comparara se todos os caracteres independente de ser os dois maniúscula ou minùscula
    int result = strnicmp(string1,string2);   //comando para comparar se detemiandos caracters são identicos das strings independente de ser os dois maniúscula ou minùscula




    printf("%d", result);


return 0;
}