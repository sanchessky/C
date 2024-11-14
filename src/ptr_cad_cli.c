#include <stdio.h>
/* função de cadastro*/
void cadastro(char*nome,char*email,char *idade,char *telefone){
    FILE *arquivo;
    arquivo = fopen ("files/cad_cli.txt","a");
    fprintf(arquivo,nome);
    fprintf(arquivo,email);
    fprintf(arquivo,idade);
    fprintf(arquivo,telefone);
    fclose(arquivo);
}
int main (){
    char nome[30];
    char email[50];
    char idade [5];
    char telefone[15];
    printf("Digite o seu nome e tecle Enter:\n");
    scanf("%[^\n]s",nome);
    printf("Digite o seu email e tecle Enter:\n");
    scanf("%s",email);
    printf("Digite a sua idade e tecle Enter:\n");
    scanf("%s",idade);
    printf("Digite o seu telefone e tecle Enter:\n");
    scanf("%s",telefone);
    cadastro (nome,email,idade,telefone);
    printf ("Cadastrado\n");
    return 0;
}