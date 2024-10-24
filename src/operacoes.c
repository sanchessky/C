#include <stdio.h>

int main (){
    int num1;
    int num2;
    int somar;
    int subtrair;                   //   variaveis para realizar operações de calculo //       
    int multiplicar;
    int dividir;
    int resto;

    printf("Digite um número: \n");
    scanf("%d",&num1);
    // Função ao Digitar o número//
    printf("Digite outro Número: \n");
    scanf("%d",&num2);

    
    // realizar a soma entre num1 e num2 //
    somar = num1 + num2;
    // realizar subtração entre num1 e num2 //
    subtrair = num1 - num2;
    // realizar multiplicação entre num1 e num2 //
    multiplicar = num1 * num2;
    // realizar divisão entre num1 e num2 //
    dividir = num1 / num2;
    // realizar resto entre num1 e num2 //
    resto = num1 % num2;

    printf("A soma entre %d e %d é igual a %d\n", num1, num2,somar);
    printf("A subtração entre %d e %d é igual a %d\n", num1,num2,subtrair);
    printf("A Multiplicação entre %d e %d é igual a %d\n", num1,num2,multiplicar);
    printf("A divisão entre %d e %d é igual a %d\n", num1,num2,dividir);
    printf("o Resto da divisão entre %d e %d é igual a %d\n", num1,num2,resto);


    return 0;

    }

