/*
Elabora um algoritmo que valide o nome de uma cor, ou seja, o usuário poderá digitar apenas
branco, verde e amarelo
*/

#include<stdio.h>
#include<string.h> //biblioteca com funções p manipulaçao de string

int main(){

    char nomeCor[100];

    printf("Digite o nome: ");
    gets(nomeCor);

    if (strcmp(nomeCor, "verde") == 0)
        printf("Cores iguais");
    if (strcmp(nomeCor, "branco") == 0)
        printf("Cores iguais");
    if (strcmp(nomeCor, "amarelo") == 0)
        printf("Cores iguais");
                   

}