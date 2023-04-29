//Faça um algoritmo que leia até 30 letras 
//e as escreva na ordem inversa (ou contrária) da que foram lidas.

#include<stdio.h>
#include<string.h>

int main(){
    char vetorChar[30];
    int i;
    
    printf("Digite a palavra:\n");
    scanf("%s", &vetorChar);
    //joyce\0
    //strlen(vetorChar) => retorna um valor inteiro

    for(i=strlen(vetorChar);i>=0;i--){
        printf("%c", vetorChar[i]);
    }

    




}