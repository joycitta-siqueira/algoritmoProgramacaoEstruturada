/*
Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas
branco, verde e amarelo
*/

#include<stdio.h>
#include<string.h>

int main(){
    char cor[20];

    printf("Digite uma cor: ");
    gets(cor);

    //int strcmp (char *x, char *y); => assinatura da função
    printf("%d\n", strcmp(cor, "verde"));

    if (strcmp(cor, "verde") == 0)
        printf("Sao iguais");
        else printf("Sao diferentes");

}