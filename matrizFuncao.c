/*
Escreva um programa em C que leia os elementos de numerosMatriz numérica de 10x5(linha x
coluna). A seguir, conte separadamente quantos elementos pares e ímpares existem na
matriz
*/

#include<stdio.h>
//#include<stdlib.h>
#define linha 2
#define coluna 2

void preencherMatrizAutomaticamente (int numerosMatriz[linha][coluna]){
    int i, j;
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            numerosMatriz[i][j] = i * j;//rand() % 100;
        }
    }
}

void preencherMatrizUsuario (int numerosMatriz[linha][coluna]){
    int i, j;
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("Digite um numero inteiro: ");
            scanf("%d", &numerosMatriz[i][j]);
        }
    }
}

void imprimirMatriz (int numerosMatriz[linha][coluna]){
    int i, j;
    for(i=0;i<linha;i++){ //controla as linhas
        for(j=0;j<coluna;j++){ //controla as colunas
            printf("%d\t", numerosMatriz[i][j]);
        }
        printf("\n");
    }
}


void imprimirParesImpares (int numerosMatriz[linha][coluna]){
    int i, j, par=0, impar=0;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if (numerosMatriz[i][j] % 2 == 1)
                impar++; // impar = impar + 1;
                else par++; //par = par + 1
        }
    }
    printf("Numeros pares: %d\nNumero impares: %d\n", par, impar);
}


int retornarPares (int numerosMatriz[linha][coluna]){
    int i, j, par=0;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if (numerosMatriz[i][j] % 2 == 2)
                    par++; //par = par + 1
        }
    }
   return par;
}

int retornarImpares (int numerosMatriz[linha][coluna]){
    int i, j, impar=0;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if (numerosMatriz[i][j] % 2 == 1)
                    impar++; //par = par + 1
        }
    }
   return impar;
}

void imprimirParesImparesParametros (int numerosMatriz[linha][coluna], int par, int impar){
    int i, j;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if (numerosMatriz[i][j] % 2 == 1)
                impar++; // impar = impar + 1;
                else par++; //par = par + 1
        }
    }
    printf("Numeros pares: %d\nNumero impares: %d\n", par, impar);
}

int retornarImparesParametro (int numerosMatriz[linha][coluna], int impar){
    int i, j;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if (numerosMatriz[i][j] % 2 == 1)
                    impar++; //par = par + 1
        }
    }
   return impar;
}

int main(){
    int numerosMatriz[linha][coluna]; 
    int par = 0, impar = 0, opcao, opcao2;

    do{
        printf("Digite a opcao desejada");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1: preencherMatrizAutomaticamente(numerosMatriz);
                break;
            case 2: imprimirMatriz(numerosMatriz);
                break;
            case 3: imprimirParesImpares(numerosMatriz);
                break;
            case 4: printf("Par: %d", retornarPares(numerosMatriz));
                break;
            case 5: printf("Impar: %d", retornarImpares(numerosMatriz));
                break;
            case 6: imprimirParesImparesParametros(numerosMatriz, par, impar);
                break;
            case 7: printf("%d", retornarImparesParametro(numerosMatriz, impar));
                    printf("%d", impar);
                break;
            default: printf("opcao invalida");
                break;
        }
        printf("Digite escolhar uma nova opcao");
        scanf("%d", &opcao2); //1 sim
    }while (opcao2 == 1);

    
}

