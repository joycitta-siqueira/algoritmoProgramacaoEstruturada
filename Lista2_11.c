/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
tabela a seguir:
*/

#include<stdio.h>
int main(){
    int x, y, z, operacao;
    float resultMedia;

    printf("Digite os tres valores: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("Digite o operador: ");
    scanf("%d", &operacao);

    if(operacao == 1){
        resultMedia = x * y * z;
        printf("Media Geometrica: %.1f\n", resultMedia);
    } else if (operacao == 2){
        resultMedia = (x + 2 * y + 3 * z) / 6;
        printf("Media Ponderada: %.1f\n", resultMedia);
    } else if (operacao == 3) {
        resultMedia = 1 / (1/x + 1/y + 1/z);
        printf("Media Harmonica: %.1f\n", resultMedia);
    } else if (operacao  == 4){
        resultMedia = (x + y + z) / 3;
        printf("Media simples: %.1f\n", resultMedia);
    } else printf("Usuario digitou valor invalido!");
    
}