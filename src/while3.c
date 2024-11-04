#include <stdio.h>
int main(){
    int n,i,rs;
    i = 1;
    printf("Digite um número para a tabuada e tecle Enter\n");
    scanf("%d",&n);
        while (i <=10){  
            rs = n*i;
            printf("%dx%d=%d\n",n,i,rs);
            i++;
        }
    
return 0;

}