#include<stdio.h>
#include<stdbool.h>

int main(){
    char a = 'C';
    char b[] = "Felippe";

    float c = 3.141592653589793;
    double d = 3.141592653589793; //double d: é para colocar o dobro do ponto flutuante.%lf
    bool e = true; // bool serve para valores booleanos que são(verdadeiros ou falsos)%d
    char f = -120; //esse se utiliza 1 byte da memoria qunado usamos o %d ele le o numero, agora quando usamos o %c ele vai passar como caracter. esse armazena numeros de -128 até +127
    unsigned char g = 255; // esse se utiliza 1 byte da memoria desse jeito podemos armazenar numeros de 0 até +255 positivo %d ou %c
    short h = 32768; // esse seria para podemos utilizar dois bytes da memoria. pode utlizar des de numeros como(-32,768 até +32,767)%d
    unsigned short int i = 65535; //esse se utiliza 2 bytes da memoria desse jeito podemos armazenar numeros de (0 até +65,535)%d
    int j = 2147483647; // esse utiliza 4 bytes de memoria(-2,147,483,648 até +2,147,483,647) %d
    unsigned int k = 4294967295; //esse utiliza 4 bytes de memoria(0 até +2,147,483,647) %u
    long long int l = 9223372036854775807; //esse utiliza 8 bytes de memoria por ser um numero grande que é(-9 quintilhão até + 9 quintilhão)%lld
    unsigned long long int m = 18446744073709551615U;// //esse utiliza 8 bytes de memoria por ser um numero grande que é(0 até + 18 quintilhão)%llu





    printf("%c\n", a);
    printf("%s\n", b);
    printf("%0.15f\n",c);
    printf("%0.15lf\n",d);
    printf("%d\n",e);
    printf("%c\n", f);
    printf("%d\n",g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);
    printf("%llf\n",l);
    printf("%llu\n", m);
    return 0;

}