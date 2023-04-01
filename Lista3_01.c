/*Elabore um algoritmo que receba o nome completo de um cliente e imprima 
a quantidade de caracteres digitados*/

#include<stdio.h>
#include<string.h>

int main(){
    char nomeCompletoGets[100];
    char nomeCompletoScanf[100];
    char nomeCompletoFgets[100];

    printf("Digite o nome completo do cliente: ");
    scanf("%s", &nomeCompletoScanf);
    fflush(stdin);
    printf("Digite o nome completo do cliente: ");
    gets(nomeCompletoGets);
    printf("Digite o nome completo do cliente: ");
    fgets(nomeCompletoFgets, 100, stdin);

    printf("Scanf: %d\n", strlen(nomeCompletoScanf));
    printf("Gets: %d\n", strlen(nomeCompletoGets));
    printf("Fgets: %d\n", strlen(nomeCompletoFgets));

    printf("Scanf: %sFgets: %sGets: %s", nomeCompletoScanf, nomeCompletoFgets, nomeCompletoGets);

}