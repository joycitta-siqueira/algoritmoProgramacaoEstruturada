//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.

#include<stdio.h>

int main(){
    float vetorReais[5];
    int i;

    //preencher vetor
    for (i=0; i<5; i++){
        printf("Digite a nota que sera salva no indice - %d\n", i);
        scanf("%f", &vetorReais[i]);
    }

    //imprimir o vetor
    for(i=0; i<5; i++){
        printf("%f\t", vetorReais[i]);
       // printf("%d\t", &vetorReais[i]);
        printf("%x\t", &vetorReais[i]);
        printf("\n");
    }






}