#include <stdio.h>
 int encontrarOMaximo(int x, int y){
    return (x > y) ? x : y;
    // return (x > y) ? x : y; : isso se trata de  operador tenario, basicamente ajuda a não escrevemos varias linhas de if e else, onde utliziamos uma condicação seguida por ? depois colocamos o valor verdadeiro, depois colocamos dois pontos para sempraramos e colocar o valor se caso for falso, no caso acima usamos o return mas poderiamos fazer de qualquer outra forma, só colocando um nome para ser igual a condição, no caso de cima utilizamos desse jeito para que podemos buscar na varialvel "int max" para exebimos o resultado
 }
int main(){

    int max = encontrarOMaximo(5, 4);
    printf("%d", max);

return 0;
}