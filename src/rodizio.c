#include <stdio.h>
    // este programa rodizio de carro //
int main(){
    int placa;
    printf("Digite o Numero final da placa do seu veiculo e tecle Enter: \n");
    scanf("%d", &placa);

    if (placa==1 || placa==2){
        printf("Este veiculo não pode circular na Segunda-feira \n");

    }   
    else if(placa==3 || placa==4){
        printf("Este veiculo não pode circular na Terça-feira \n");

    }
     else if(placa==5 || placa==6){
        printf("Este veiculo não pode circular na Quarta-feira \n");

    }
    else if(placa==7 || placa==8){
        printf("Este veiculo não pode circular na Quinta-feira \n");

    }
    else if(placa==9 || placa==0){
        printf("Este veiculo não pode circular na Sexta-feira \n");

    }
    else{
        printf("Número de placa inválido\n ");
    }

    return 0;


}