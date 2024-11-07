#include <stdio.h>
    int quadrado (int v);
      
    int main (){
        printf("%d\n",quadrado(2));
        int r = quadrado(5);
    return 0;
}
    
    int quadrado(int v){
        printf("%d\n",v*v);
}