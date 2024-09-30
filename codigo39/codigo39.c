#include <stdio.h>
#include <string.h>

struct Estudante
{
    char nome[12];
    float gpa;
};


int main(){
struct Estudante estudante1 = {"Bobesponja", 3.0};
struct Estudante estudante2 = {"Patrick", 2.5};
struct Estudante estudante3 = {"Sandy", 4.0};
struct Estudante estudante4 = {"lulamolusco", 2.0};

struct Estudante estudante[] = {estudante1, estudante2, estudante3, estudante4};

for (int i = 0; i < sizeof(estudante)/sizeof(estudante[0]); i++)
{
    printf("%-12s\t", estudante[i].nome);
    printf("%.1f\n", estudante[i].gpa);
}



return 0;
}