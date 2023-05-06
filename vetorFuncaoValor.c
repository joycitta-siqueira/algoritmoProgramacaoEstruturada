//Função => passagem de parametro por valor
#include<stdio.h>

int nomeFuncao (int parametroFuncao){
    printf("Digite o valor de parametroFuncao:");
    scanf("%d", &parametroFuncao);
    return parametroFuncao;
}

int main(){
    int parametroMain;
    printf("Digite o valor de parametroMain:");
    scanf("%d", &parametroMain);
    printf("%d", nomeFuncao(parametroMain));
}