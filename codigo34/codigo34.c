#include <stdio.h>
#include <string.h>

int main(){

    char carros[][10] = {"Mustang", "Corvette", "Camaro"};
    // carros[0]= "Tesla"; --> jeito errado
    strcpy(carros[0], "Tesla");
     
       for(int i = 0; i < sizeof(carros)/sizeof(carros[0]); i++)
   {
      printf("%s\n", carros[i]);
   }
     


return 0;
}