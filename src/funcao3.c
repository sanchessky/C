#include <stdio.h>
#include "calculos.h"

int main(){
    int valores[] = {10,20,30.40,50,60,70}; /*oitos numeros*/
    printf("O resultado da soma é %d\n",somaArray(valores,8));
    printf("O resultado da média é %d\n",mediaArray(valores,8));
    printf("O maior valor é %d\n", maiorValor(valores,8));
    return 0;

}