#include <stdio.h>
int main(){

    char nome[20];
    printf("Coloque o primeiro nome seu e tecle Enter:\n");
    scanf("%[^\n]",nome);
    printf("Olá, %s. Seja Bem-VIndo\n",nome);
    return 0;
}