#include <stdio.h>

int main() {
    int mes;
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    if (mes==1 || mes==2 || mes==12){
        printf("Estação Verão \n");
    }   
    else if(mes==3 || mes==4 ||mes==5){
        printf("Estação Outono\n");
    }
    else if(mes==6 || mes==7 ||mes==8){
        printf("Estação Inverno \n");

    }
     else if(mes==9 || mes==10 ||mes==11){
        printf("Estação Primavra \n");
        
    }

    return 0;
}
